/**
 * PQC-DTLS Server for Linux
 * Interacts with bare-metal RISC-V client over UDP
 * 
 * Protocol: Custom PQC-DTLS using ML-KEM-512 for key exchange
 *           and AES-GCM for symmetric encryption
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <unistd.h>
#include <errno.h>
#include <signal.h>
#include <time.h>
#include <sys/time.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>

/* wolfSSL includes - user_settings.h is included automatically via -DWOLFSSL_USER_SETTINGS */
#include <wolfssl/wolfcrypt/settings.h>
#include <wolfssl/wolfcrypt/wc_mlkem.h>
#include <wolfssl/wolfcrypt/random.h>
#include <wolfssl/wolfcrypt/sha256.h>
#include <wolfssl/wolfcrypt/aes.h>
#include <wolfssl/wolfcrypt/error-crypt.h>

/*============================================================================
 * Stub functions for wolfSSL (these are needed by wolfcrypt but we don't use them)
 *============================================================================*/

/* Stub for CA lookup - we don't use certificates in this demo */
void* GetCA(void* cm, const unsigned char* hash) {
    (void)cm; (void)hash;
    return NULL;
}

void* GetCAByName(void* cm, const unsigned char* hash) {
    (void)cm; (void)hash;
    return NULL;
}

/* 
 * Custom RNG for wolfSSL - reads from /dev/urandom on Linux
 * This is called when WC_RNG_SEED_CB is defined in the embedded client's settings
 */
int CustomRngGenerateBlock(unsigned char* output, unsigned int sz) {
    FILE* f = fopen("/dev/urandom", "rb");
    if (f == NULL) {
        /* Fallback to less secure PRNG if /dev/urandom not available */
        static unsigned int seed = 0;
        if (seed == 0) seed = (unsigned int)time(NULL);
        for (unsigned int i = 0; i < sz; i++) {
            seed = seed * 1103515245 + 12345;
            output[i] = (unsigned char)(seed >> 16);
        }
        return 0;
    }
    size_t ret = fread(output, 1, sz, f);
    fclose(f);
    return (ret == sz) ? 0 : -1;
}

/*============================================================================
 * Network Configuration - Must match client settings
 *============================================================================*/
#define SERVER_IP       "0.0.0.0"   /* Bind to all interfaces */
#define SERVER_PORT     11111
#define CLIENT_PORT     22222

/*============================================================================
 * Protocol Message Types - Must match client
 *============================================================================*/
#define MSG_CLIENT_HELLO     0x01
#define MSG_SERVER_HELLO     0x02
#define MSG_KEY_EXCHANGE     0x03
#define MSG_ENCRYPTED_DATA   0x04
#define MSG_FINISHED         0x05

#define MAX_PACKET_SIZE      2048
#define RECV_TIMEOUT_SEC     30

/*============================================================================
 * Global State
 *============================================================================*/
static WC_RNG rng;
static uint8_t shared_secret[32];
static uint8_t server_key[16];
static uint8_t server_iv[12];
static int handshake_complete = 0;
static volatile int running = 1;

static int sock_fd = -1;
static struct sockaddr_in client_addr;
static socklen_t client_addr_len = sizeof(client_addr);

/*============================================================================
 * Signal Handler
 *============================================================================*/
static void signal_handler(int sig) {
    (void)sig;
    printf("\n[Server] Shutting down...\n");
    running = 0;
}

/*============================================================================
 * Utility Functions
 *============================================================================*/
static void print_hex(const char *label, const uint8_t *data, int len) {
    printf("%s: ", label);
    int print_len = (len > 32) ? 32 : len;
    for (int i = 0; i < print_len; i++) {
        printf("%02x", data[i]);
    }
    if (len > 32) printf("...");
    printf(" (%d bytes)\n", len);
}

static void print_timestamp(void) {
    time_t now = time(NULL);
    struct tm *tm_info = localtime(&now);
    char buffer[26];
    strftime(buffer, 26, "%Y-%m-%d %H:%M:%S", tm_info);
    printf("[%s] ", buffer);
}

/*============================================================================
 * Key Derivation - Must match client
 *============================================================================*/
static void derive_keys(const uint8_t *ss) {
    wc_Sha256 sha;
    uint8_t hash[32];

    wc_InitSha256(&sha);
    wc_Sha256Update(&sha, ss, 32);
    wc_Sha256Update(&sha, (const uint8_t*)"client_key", 10);
    wc_Sha256Final(&sha, hash);

    memcpy(server_key, hash, 16);
    memcpy(server_iv, hash + 16, 12);

    print_hex("Derived Key", server_key, 16);
    print_hex("Derived IV", server_iv, 12);
}

/*============================================================================
 * Network Functions
 *============================================================================*/
static int server_init_socket(void) {
    struct sockaddr_in server_addr;
    int opt = 1;

    printf("[Server] Creating UDP socket...\n");

    sock_fd = socket(AF_INET, SOCK_DGRAM, 0);
    if (sock_fd < 0) {
        perror("socket");
        return -1;
    }

    /* Allow address reuse */
    if (setsockopt(sock_fd, SOL_SOCKET, SO_REUSEADDR, &opt, sizeof(opt)) < 0) {
        perror("setsockopt SO_REUSEADDR");
        close(sock_fd);
        return -1;
    }

    /* Set receive timeout */
    struct timeval tv;
    tv.tv_sec = RECV_TIMEOUT_SEC;
    tv.tv_usec = 0;
    if (setsockopt(sock_fd, SOL_SOCKET, SO_RCVTIMEO, &tv, sizeof(tv)) < 0) {
        perror("setsockopt SO_RCVTIMEO");
        close(sock_fd);
        return -1;
    }

    memset(&server_addr, 0, sizeof(server_addr));
    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(SERVER_PORT);
    
    if (inet_pton(AF_INET, SERVER_IP, &server_addr.sin_addr) <= 0) {
        /* If specific IP fails, bind to all interfaces */
        printf("[Server] Binding to all interfaces (0.0.0.0)\n");
        server_addr.sin_addr.s_addr = INADDR_ANY;
    }

    if (bind(sock_fd, (struct sockaddr*)&server_addr, sizeof(server_addr)) < 0) {
        perror("bind");
        close(sock_fd);
        return -1;
    }

    printf("[Server] Listening on port %d\n", SERVER_PORT);
    return 0;
}

static int server_send_packet(uint8_t msg_type, const uint8_t *data, uint16_t len) {
    uint8_t packet[MAX_PACKET_SIZE];
    
    if (len + 3 > MAX_PACKET_SIZE) {
        printf("ERROR: Packet too large\n");
        return -1;
    }

    /* Build protocol header: [msg_type:1][length:2] + payload */
    packet[0] = msg_type;
    packet[1] = (len >> 8) & 0xFF;
    packet[2] = len & 0xFF;
    memcpy(packet + 3, data, len);

    /* Get the client's port from the received address */
    uint16_t client_port = ntohs(client_addr.sin_port);
    
    printf("[DEBUG] Sending to %s:%d\n", 
           inet_ntoa(client_addr.sin_addr), client_port);

    ssize_t sent = sendto(sock_fd, packet, len + 3, 0,
                          (struct sockaddr*)&client_addr, client_addr_len);
    
    if (sent < 0) {
        perror("sendto");
        return -1;
    }

    print_timestamp();
    printf("[TX] Type=0x%02x Len=%d (sent %zd bytes to port %d)\n", 
           msg_type, len, sent, client_port);
    return 0;
}

static int server_recv_packet(uint8_t *msg_type, uint8_t *data, uint16_t max_len) {
    uint8_t packet[MAX_PACKET_SIZE];
    
    client_addr_len = sizeof(client_addr);
    ssize_t recv_len = recvfrom(sock_fd, packet, sizeof(packet), 0,
                                 (struct sockaddr*)&client_addr, &client_addr_len);
    
    if (recv_len < 0) {
        if (errno == EAGAIN || errno == EWOULDBLOCK) {
            return -1; /* Timeout */
        }
        perror("recvfrom");
        return -2;
    }

    if (recv_len < 3) {
        printf("ERROR: Packet too small (%zd bytes)\n", recv_len);
        return -3;
    }

    *msg_type = packet[0];
    uint16_t len = (packet[1] << 8) | packet[2];

    if (len > max_len || len > (uint16_t)(recv_len - 3)) {
        printf("ERROR: Invalid length: %d (max=%d, available=%zd)\n",
               len, max_len, recv_len - 3);
        return -4;
    }

    memcpy(data, packet + 3, len);

    char client_ip[INET_ADDRSTRLEN];
    inet_ntop(AF_INET, &client_addr.sin_addr, client_ip, sizeof(client_ip));
    
    print_timestamp();
    printf("[RX] Type=0x%02x Len=%d from %s:%d\n",
           *msg_type, len, client_ip, ntohs(client_addr.sin_port));

    return len;
}

/*============================================================================
 * PQC-DTLS Server Protocol Handlers
 *============================================================================*/
static int server_handle_client_hello(const uint8_t *client_random, int len) {
    printf("\n[Server] Received ClientHello\n");
    
    if (len != 32) {
        printf("ERROR: Invalid ClientRandom size: %d\n", len);
        return -1;
    }
    
    print_hex("ClientRandom", client_random, 32);

    /* Generate and send ServerHello with server random */
    printf("[Server] Sending ServerHello...\n");
    
    uint8_t server_random[32];
    if (wc_RNG_GenerateBlock(&rng, server_random, sizeof(server_random)) != 0) {
        printf("ERROR: Failed to generate server random\n");
        return -1;
    }
    
    print_hex("ServerRandom", server_random, 32);
    
    if (server_send_packet(MSG_SERVER_HELLO, server_random, sizeof(server_random)) != 0) {
        printf("ERROR: Failed to send ServerHello\n");
        return -1;
    }

    return 0;
}

static int server_handle_key_exchange(const uint8_t *client_pubkey, int len) {
    int ret;
    
    printf("\n[Server] Received client public key\n");
    
    if (len != WC_ML_KEM_512_PUBLIC_KEY_SIZE) {
        printf("ERROR: Invalid public key size: %d (expected %d)\n",
               len, WC_ML_KEM_512_PUBLIC_KEY_SIZE);
        return -1;
    }
    
    print_hex("Client PubKey", client_pubkey, len);

    /* Create ML-KEM key for encapsulation */
    MlKemKey *kem_key = wc_MlKemKey_New(WC_ML_KEM_512, NULL, INVALID_DEVID);
    if (!kem_key) {
        printf("ERROR: Failed to allocate ML-KEM key\n");
        return -1;
    }

    /* Decode client's public key */
    ret = wc_MlKemKey_DecodePublicKey(kem_key, client_pubkey, len);
    if (ret != 0) {
        printf("ERROR: Failed to decode public key: %d\n", ret);
        wc_MlKemKey_Free(kem_key);
        return ret;
    }
    printf("[Server] Decoded client public key\n");

    /* Encapsulate - generate ciphertext and shared secret */
    uint8_t ciphertext[WC_ML_KEM_512_CIPHER_TEXT_SIZE];
    
    printf("[Server] Performing ML-KEM encapsulation...\n");
    ret = wc_MlKemKey_Encapsulate(kem_key, ciphertext, shared_secret, &rng);
    wc_MlKemKey_Free(kem_key);
    
    if (ret != 0) {
        printf("ERROR: Encapsulation failed: %d\n", ret);
        return ret;
    }
    printf("[Server] ML-KEM encapsulation OK\n");

    print_hex("Ciphertext", ciphertext, sizeof(ciphertext));
    print_hex("Shared Secret", shared_secret, sizeof(shared_secret));

    /* Derive encryption keys */
    derive_keys(shared_secret);

    /* Send ciphertext to client */
    printf("[Server] Sending ciphertext to client...\n");
    if (server_send_packet(MSG_KEY_EXCHANGE, ciphertext, sizeof(ciphertext)) != 0) {
        printf("ERROR: Failed to send ciphertext\n");
        return -1;
    }

    return 0;
}

static int server_handle_finished(const uint8_t *data, int len) {
    printf("\n[Server] Received client Finished message\n");
    
    /* Expected: encrypted "CLIENT_FINISHED" + 16-byte tag */
    const char *expected_msg = "CLIENT_FINISHED";
    int msg_len = strlen(expected_msg);
    
    if (len != msg_len + 16) {
        printf("ERROR: Invalid Finished message size: %d (expected %d)\n",
               len, msg_len + 16);
        return -1;
    }

    /* Decrypt and verify */
    uint8_t plaintext[64];
    Aes aes;
    
    wc_AesGcmSetKey(&aes, server_key, sizeof(server_key));
    
    int ret = wc_AesGcmDecrypt(&aes, plaintext, data, msg_len,
                                server_iv, sizeof(server_iv),
                                data + msg_len, 16, NULL, 0);
    
    if (ret != 0) {
        printf("ERROR: Finished message decryption failed: %d\n", ret);
        return ret;
    }
    
    plaintext[msg_len] = '\0';
    printf("[Server] Decrypted Finished: \"%s\"\n", (char*)plaintext);

    if (memcmp(plaintext, expected_msg, msg_len) != 0) {
        printf("ERROR: Finished message mismatch\n");
        return -1;
    }

    /* Send server Finished */
    printf("[Server] Sending server Finished...\n");
    
    const char *server_finished = "SERVER_FINISHED";
    uint8_t ciphertext[64];
    uint8_t tag[16];
    
    wc_AesGcmSetKey(&aes, server_key, sizeof(server_key));
    
    ret = wc_AesGcmEncrypt(&aes, ciphertext, (const uint8_t*)server_finished,
                           strlen(server_finished), server_iv, sizeof(server_iv),
                           tag, sizeof(tag), NULL, 0);
    
    if (ret != 0) {
        printf("ERROR: Failed to encrypt server Finished: %d\n", ret);
        return ret;
    }

    uint8_t packet[80];
    memcpy(packet, ciphertext, strlen(server_finished));
    memcpy(packet + strlen(server_finished), tag, 16);

    if (server_send_packet(MSG_FINISHED, packet, strlen(server_finished) + 16) != 0) {
        printf("ERROR: Failed to send server Finished\n");
        return -1;
    }

    handshake_complete = 1;
    printf("[Server] Handshake complete!\n");

    return 0;
}

static int server_handle_encrypted_data(const uint8_t *data, int len) {
    printf("\n[Server] Received encrypted data\n");
    
    if (!handshake_complete) {
        printf("ERROR: Handshake not complete\n");
        return -1;
    }

    /* Format: [IV:12][ciphertext:N][tag:16] */
    if (len < 12 + 16) {
        printf("ERROR: Encrypted data too short: %d\n", len);
        return -1;
    }

    const uint8_t *iv = data;
    int ct_len = len - 12 - 16;
    const uint8_t *ciphertext = data + 12;
    const uint8_t *tag = data + 12 + ct_len;

    print_hex("IV", iv, 12);
    print_hex("Ciphertext", ciphertext, ct_len);
    print_hex("Tag", tag, 16);

    uint8_t plaintext[256];
    Aes aes;
    
    wc_AesGcmSetKey(&aes, server_key, sizeof(server_key));
    
    int ret = wc_AesGcmDecrypt(&aes, plaintext, ciphertext, ct_len,
                                iv, 12, tag, 16, NULL, 0);
    
    if (ret != 0) {
        printf("ERROR: Decryption failed: %d\n", ret);
        return ret;
    }

    plaintext[ct_len] = '\0';
    printf("[Server] Decrypted message: \"%s\"\n", (char*)plaintext);

    return 0;
}

/*============================================================================
 * Main Server Loop
 *============================================================================*/
static int run_server(void) {
    uint8_t buffer[MAX_PACKET_SIZE];
    uint8_t msg_type;
    int ret;

    printf("\n========================================\n");
    printf("  PQC-DTLS Server Ready\n");
    printf("  Waiting for client connection...\n");
    printf("========================================\n\n");

    while (running) {
        int len = server_recv_packet(&msg_type, buffer, sizeof(buffer));
        
        if (len < 0) {
            if (len == -1) {
                /* Timeout - just continue waiting */
                continue;
            }
            printf("ERROR: Receive error: %d\n", len);
            continue;
        }

        switch (msg_type) {
            case MSG_CLIENT_HELLO:
                ret = server_handle_client_hello(buffer, len);
                if (ret != 0) {
                    printf("ERROR: ClientHello handling failed\n");
                    handshake_complete = 0;
                }
                break;

            case MSG_KEY_EXCHANGE:
                ret = server_handle_key_exchange(buffer, len);
                if (ret != 0) {
                    printf("ERROR: KeyExchange handling failed\n");
                    handshake_complete = 0;
                }
                break;

            case MSG_FINISHED:
                ret = server_handle_finished(buffer, len);
                if (ret != 0) {
                    printf("ERROR: Finished handling failed\n");
                    handshake_complete = 0;
                }
                break;

            case MSG_ENCRYPTED_DATA:
                ret = server_handle_encrypted_data(buffer, len);
                if (ret != 0) {
                    printf("ERROR: Encrypted data handling failed\n");
                }
                break;

            default:
                printf("WARNING: Unknown message type: 0x%02x\n", msg_type);
                break;
        }
    }

    return 0;
}

/*============================================================================
 * Standalone ML-KEM Demo
 *============================================================================*/
static int standalone_demo(void) {
    int ret;

    printf("\n========================================\n");
    printf("  Standalone ML-KEM-512 Demo\n");
    printf("========================================\n\n");

    /* Simulate Alice (client) and Bob (server) */
    MlKemKey *alice = wc_MlKemKey_New(WC_ML_KEM_512, NULL, INVALID_DEVID);
    MlKemKey *bob = wc_MlKemKey_New(WC_ML_KEM_512, NULL, INVALID_DEVID);

    if (!alice || !bob) {
        printf("ERROR: Key allocation failed\n");
        return -1;
    }

    /* Alice generates key pair */
    printf("[Alice] Generating key pair...\n");
    ret = wc_MlKemKey_MakeKey(alice, &rng);
    if (ret != 0) {
        printf("ERROR: Alice KeyGen failed: %d\n", ret);
        goto cleanup;
    }
    printf("[Alice] KeyGen OK\n");

    /* Alice sends public key to Bob */
    uint8_t alice_pub[WC_ML_KEM_512_PUBLIC_KEY_SIZE];
    wc_MlKemKey_EncodePublicKey(alice, alice_pub, sizeof(alice_pub));
    print_hex("Alice Public Key", alice_pub, sizeof(alice_pub));

    /* Bob decodes Alice's public key and encapsulates */
    printf("\n[Bob] Decoding Alice's public key...\n");
    ret = wc_MlKemKey_DecodePublicKey(bob, alice_pub, sizeof(alice_pub));
    if (ret != 0) {
        printf("ERROR: Bob decode failed: %d\n", ret);
        goto cleanup;
    }

    uint8_t ct[WC_ML_KEM_512_CIPHER_TEXT_SIZE];
    uint8_t ss_bob[32], ss_alice[32];

    printf("[Bob] Encapsulating...\n");
    ret = wc_MlKemKey_Encapsulate(bob, ct, ss_bob, &rng);
    if (ret != 0) {
        printf("ERROR: Bob encapsulation failed: %d\n", ret);
        goto cleanup;
    }
    printf("[Bob] Encapsulation OK\n");
    print_hex("Ciphertext", ct, sizeof(ct));
    print_hex("Bob's Shared Secret", ss_bob, 32);

    /* Alice decapsulates */
    printf("\n[Alice] Decapsulating...\n");
    ret = wc_MlKemKey_Decapsulate(alice, ss_alice, ct, sizeof(ct));
    if (ret != 0) {
        printf("ERROR: Alice decapsulation failed: %d\n", ret);
        goto cleanup;
    }
    printf("[Alice] Decapsulation OK\n");
    print_hex("Alice's Shared Secret", ss_alice, 32);

    /* Verify */
    if (memcmp(ss_bob, ss_alice, 32) == 0) {
        printf("\n*** SUCCESS: Shared secrets match! ***\n");
    } else {
        printf("\n*** ERROR: Shared secrets don't match! ***\n");
        ret = -1;
    }

cleanup:
    wc_MlKemKey_Free(alice);
    wc_MlKemKey_Free(bob);
    return ret;
}

/*============================================================================
 * Main Entry Point
 *============================================================================*/
int main(int argc, char *argv[]) {
    int ret;
    int demo_only = 0;

    printf("\n");
    printf("========================================\n");
    printf("  PQC-DTLS Server (Linux UDP)\n");
    printf("  Using ML-KEM-512 + AES-GCM\n");
    printf("========================================\n\n");

    /* Check for demo-only mode */
    if (argc > 1 && strcmp(argv[1], "--demo") == 0) {
        demo_only = 1;
    }

    /* Set up signal handlers */
    signal(SIGINT, signal_handler);
    signal(SIGTERM, signal_handler);

    /* Initialize wolfSSL RNG */
    printf("[Init] Initializing RNG...\n");
    ret = wc_InitRng(&rng);
    if (ret != 0) {
        printf("ERROR: RNG init failed: %d\n", ret);
        return 1;
    }
    printf("[Init] RNG initialized\n");

    /* Run standalone demo */
    ret = standalone_demo();
    if (ret != 0) {
        printf("WARNING: Standalone demo failed\n");
    }

    if (demo_only) {
        printf("\n[Demo] Demo-only mode, exiting...\n");
        wc_FreeRng(&rng);
        return 0;
    }

    /* Initialize network */
    printf("\n[Init] Initializing network...\n");
    ret = server_init_socket();
    if (ret != 0) {
        printf("ERROR: Network init failed\n");
        wc_FreeRng(&rng);
        return 1;
    }

    printf("[Init] Server listening on port: %d (all interfaces)\n", SERVER_PORT);
    printf("[Init] Expected client port: %d\n", CLIENT_PORT);

    /* Run main server loop */
    run_server();

    /* Cleanup */
    printf("\n[Cleanup] Shutting down...\n");
    if (sock_fd >= 0) {
        close(sock_fd);
    }
    wc_FreeRng(&rng);

    printf("[Cleanup] Done\n");
    return 0;
}