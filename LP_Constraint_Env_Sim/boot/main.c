/**
 * PQC-DTLS Client for Bare-Metal RISC-V
 * Inter IIT Tech Meet 14.0 - QTrino Labs Challenge
 *
 * Client implementation with:
 * - ML-KEM-512 (Kyber) key exchange
 * - AES-128-GCM authenticated encryption
 * - UART-based communication with host server
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

#include <irq.h>
#include <libbase/uart.h>
#include <libbase/console.h>
#include <generated/csr.h>

#include <wolfssl/wolfcrypt/user_settings.h>
#include <wolfssl/options.h>
#include <wolfssl/wolfcrypt/wc_mlkem.h>
#include <wolfssl/wolfcrypt/random.h>
#include <wolfssl/wolfcrypt/sha256.h>
#include <wolfssl/wolfcrypt/sha3.h>
#include <wolfssl/wolfcrypt/aes.h>

#ifdef min
#undef min
#endif
#ifdef max
#undef max
#endif

/*============================================================================
 * Protocol Message Types
 *============================================================================*/
#define MSG_CLIENT_HELLO     0x01
#define MSG_SERVER_HELLO     0x02
#define MSG_KEY_EXCHANGE     0x03
#define MSG_ENCRYPTED_DATA   0x04
#define MSG_FINISHED         0x05

#define MAX_PACKET_SIZE      2048
#define UART_TIMEOUT_MS      30000

/*============================================================================
 * Platform Stubs
 *============================================================================*/

int CustomRngGenerateBlock(unsigned char *output, unsigned int sz) {
    static unsigned int seed = 0xDEADBEEF;
    for (unsigned int i = 0; i < sz; i++) {
        seed = seed * 1103515245 + 12345;
        output[i] = (unsigned char)(seed >> 16);
    }
    return 0;
}

#include <sys/time.h>
static uint32_t tick_count = 0;

int gettimeofday(struct timeval* tv, void* tz) {
    (void)tz;
    if (tv) { tv->tv_sec = tick_count / 1000; tv->tv_usec = (tick_count % 1000) * 1000; }
    return 0;
}

time_t XTIME(time_t *t) {
    time_t now = tick_count / 1000;
    if (t) *t = now;
    return now;
}

static uint32_t get_ticks(void) {
    return tick_count++;
}

/*============================================================================
 * Global State
 *============================================================================*/
static WC_RNG rng;
static uint8_t shared_secret[32];
static uint8_t client_key[16];
static uint8_t client_iv[12];
static int handshake_complete = 0;

/*============================================================================
 * UART Packet I/O (Length-prefixed protocol)
 *============================================================================*/

static int uart_send_packet(uint8_t msg_type, const uint8_t *data, uint16_t len) {
    /* Header: [msg_type:1][length:2] */
    uart_write(msg_type);
    uart_write((len >> 8) & 0xFF);
    uart_write(len & 0xFF);

    /* Payload */
    for (uint16_t i = 0; i < len; i++) {
        uart_write(data[i]);
    }

    printf("[TX] Type=%02x Len=%d\n", msg_type, len);
    return 0;
}

static int uart_recv_packet(uint8_t *msg_type, uint8_t *data, uint16_t max_len) {
    uint32_t timeout = get_ticks() + UART_TIMEOUT_MS;

    /* Read header */
    while (!uart_read_nonblock()) {
        if (get_ticks() > timeout) {
            printf("[RX] Timeout waiting for header\n");
            return -1;
        }
    }
    *msg_type = uart_read();

    /* Read length (2 bytes, big-endian) */
    uint8_t len_hi = 0, len_lo = 0;
    while (!uart_read_nonblock()) {
        if (get_ticks() > timeout) return -1;
    }
    len_hi = uart_read();

    while (!uart_read_nonblock()) {
        if (get_ticks() > timeout) return -1;
    }
    len_lo = uart_read();

    uint16_t len = (len_hi << 8) | len_lo;
    if (len > max_len) {
        printf("[RX] Packet too large: %d > %d\n", len, max_len);
        return -2;
    }

    /* Read payload */
    for (uint16_t i = 0; i < len; i++) {
        while (!uart_read_nonblock()) {
            if (get_ticks() > timeout) return -1;
        }
        data[i] = uart_read();
    }

    printf("[RX] Type=%02x Len=%d\n", *msg_type, len);
    return len;
}

/*============================================================================
 * Utility Functions
 *============================================================================*/

static void print_hex(const char *label, const uint8_t *data, int len) {
    printf("%s: ", label);
    for (int i = 0; i < (len > 16 ? 16 : len); i++)
        printf("%02x", data[i]);
    if (len > 16) printf("...");
    printf(" (%d bytes)\n", len);
}

static void derive_keys(const uint8_t *ss) {
    /* Derive encryption key and IV from shared secret using SHA256 */
    wc_Sha256 sha;
    uint8_t hash[32];

    wc_InitSha256(&sha);
    wc_Sha256Update(&sha, ss, 32);
    wc_Sha256Update(&sha, (uint8_t*)"client_key", 10);
    wc_Sha256Final(&sha, hash);

    memcpy(client_key, hash, 16);
    memcpy(client_iv, hash + 16, 12);

    print_hex("Derived Key", client_key, 16);
    print_hex("Derived IV", client_iv, 12);
}

/*============================================================================
 * PQC-DTLS Client Protocol
 *============================================================================*/

static int client_send_hello(void) {
    printf("\n[Client] Sending ClientHello...\n");

    /* ClientHello contains: random[32] */
    uint8_t client_random[32];
    wc_RNG_GenerateBlock(&rng, client_random, sizeof(client_random));

    uart_send_packet(MSG_CLIENT_HELLO, client_random, sizeof(client_random));
    print_hex("ClientRandom", client_random, 32);

    return 0;
}

static int client_key_exchange(void) {
    int ret;
    uint8_t buffer[MAX_PACKET_SIZE];
    uint8_t msg_type;

    printf("\n[Client] Generating ML-KEM key pair...\n");

    /* Generate ML-KEM key pair */
    MlKemKey *key = wc_MlKemKey_New(WC_ML_KEM_512, NULL, INVALID_DEVID);
    if (!key) {
        printf("ERROR: Key allocation failed\n");
        return -1;
    }

    ret = wc_MlKemKey_MakeKey(key, &rng);
    if (ret != 0) {
        printf("ERROR: KeyGen failed: %d\n", ret);
        wc_MlKemKey_Free(key);
        return ret;
    }
    printf("[Client] ML-KEM KeyGen OK\n");

    /* Export and send public key */
    uint8_t pub_key[WC_ML_KEM_512_PUBLIC_KEY_SIZE];
    wc_MlKemKey_EncodePublicKey(key, pub_key, sizeof(pub_key));
    print_hex("Client PubKey", pub_key, sizeof(pub_key));

    uart_send_packet(MSG_KEY_EXCHANGE, pub_key, sizeof(pub_key));
    printf("[Client] Sent public key to server\n");

    /* Wait for server's ciphertext (encapsulated secret) */
    printf("[Client] Waiting for server response...\n");
    int len = uart_recv_packet(&msg_type, buffer, sizeof(buffer));
    if (len < 0 || msg_type != MSG_KEY_EXCHANGE) {
        printf("ERROR: Expected KEY_EXCHANGE, got %02x\n", msg_type);
        wc_MlKemKey_Free(key);
        return -1;
    }

    if (len != WC_ML_KEM_512_CIPHER_TEXT_SIZE) {
        printf("ERROR: Invalid ciphertext size: %d\n", len);
        wc_MlKemKey_Free(key);
        return -1;
    }

    print_hex("Server CT", buffer, len);

    /* Decapsulate to get shared secret */
    printf("[Client] Decapsulating shared secret...\n");
    ret = wc_MlKemKey_Decapsulate(key, shared_secret, buffer, len);
    wc_MlKemKey_Free(key);

    if (ret != 0) {
        printf("ERROR: Decapsulation failed: %d\n", ret);
        return ret;
    }

    print_hex("Shared Secret", shared_secret, sizeof(shared_secret));

    /* Derive traffic keys */
    derive_keys(shared_secret);

    return 0;
}

static int client_send_finished(void) {
    printf("\n[Client] Sending Finished message...\n");

    /* Finished contains: encrypted "FINISHED" + HMAC */
    const char *finished_msg = "CLIENT_FINISHED";
    uint8_t ciphertext[64];
    uint8_t tag[16];

    Aes aes;
    wc_AesGcmSetKey(&aes, client_key, sizeof(client_key));

    int ret = wc_AesGcmEncrypt(&aes, ciphertext, (uint8_t*)finished_msg,
                                strlen(finished_msg), client_iv, sizeof(client_iv),
                                tag, sizeof(tag), NULL, 0);
    if (ret != 0) {
        printf("ERROR: Encrypt failed\n");
        return ret;
    }

    /* Send: [ciphertext][tag] */
    uint8_t packet[80];
    memcpy(packet, ciphertext, strlen(finished_msg));
    memcpy(packet + strlen(finished_msg), tag, 16);

    uart_send_packet(MSG_FINISHED, packet, strlen(finished_msg) + 16);

    return 0;
}

static int client_wait_server_finished(void) {
    printf("\n[Client] Waiting for server Finished...\n");

    uint8_t buffer[MAX_PACKET_SIZE];
    uint8_t msg_type;

    int len = uart_recv_packet(&msg_type, buffer, sizeof(buffer));
    if (len < 0) {
        printf("ERROR: No response from server\n");
        return -1;
    }

    if (msg_type == MSG_FINISHED) {
        printf("[Client] Received server Finished\n");
        handshake_complete = 1;
        return 0;
    }

    printf("ERROR: Unexpected message type: %02x\n", msg_type);
    return -1;
}

static int client_send_encrypted_data(const char *message) {
    if (!handshake_complete) {
        printf("ERROR: Handshake not complete\n");
        return -1;
    }

    printf("\n[Client] Sending encrypted data: \"%s\"\n", message);

    uint8_t ciphertext[256];
    uint8_t tag[16];
    uint8_t iv[12];

    /* Use incremented IV for each message */
    memcpy(iv, client_iv, sizeof(iv));
    iv[11]++;  /* Simple IV increment */

    Aes aes;
    wc_AesGcmSetKey(&aes, client_key, sizeof(client_key));

    int ret = wc_AesGcmEncrypt(&aes, ciphertext, (uint8_t*)message,
                                strlen(message), iv, sizeof(iv),
                                tag, sizeof(tag), NULL, 0);
    if (ret != 0) {
        printf("ERROR: Encrypt failed\n");
        return ret;
    }

    /* Packet: [iv:12][ciphertext:N][tag:16] */
    uint8_t packet[284];
    int pkt_len = 0;
    memcpy(packet + pkt_len, iv, 12); pkt_len += 12;
    memcpy(packet + pkt_len, ciphertext, strlen(message)); pkt_len += strlen(message);
    memcpy(packet + pkt_len, tag, 16); pkt_len += 16;

    uart_send_packet(MSG_ENCRYPTED_DATA, packet, pkt_len);

    print_hex("Ciphertext", ciphertext, strlen(message));
    return 0;
}

/*============================================================================
 * Standalone Crypto Demo (runs without server)
 *============================================================================*/

static int standalone_demo(void) {
    int ret;

    printf("\n========================================\n");
    printf("  Standalone PQC Demo\n");
    printf("========================================\n");

    /* ML-KEM Demo */
    printf("\n=== ML-KEM-512 Key Exchange ===\n");

    MlKemKey *alice = wc_MlKemKey_New(WC_ML_KEM_512, NULL, INVALID_DEVID);
    MlKemKey *bob = wc_MlKemKey_New(WC_ML_KEM_512, NULL, INVALID_DEVID);

    if (!alice || !bob) {
        printf("Key allocation failed\n");
        return -1;
    }

    /* Alice generates key pair */
    ret = wc_MlKemKey_MakeKey(alice, &rng);
    if (ret != 0) { printf("KeyGen failed\n"); return ret; }
    printf("Alice: KeyGen OK\n");

    /* Export Alice's public key */
    uint8_t alice_pub[WC_ML_KEM_512_PUBLIC_KEY_SIZE];
    wc_MlKemKey_EncodePublicKey(alice, alice_pub, sizeof(alice_pub));
    print_hex("Alice PubKey", alice_pub, sizeof(alice_pub));

    /* Bob encapsulates */
    wc_MlKemKey_DecodePublicKey(bob, alice_pub, sizeof(alice_pub));
    uint8_t ct[WC_ML_KEM_512_CIPHER_TEXT_SIZE];
    uint8_t ss_bob[32], ss_alice[32];

    ret = wc_MlKemKey_Encapsulate(bob, ct, ss_bob, &rng);
    if (ret != 0) { printf("Encaps failed\n"); return ret; }
    printf("Bob: Encapsulation OK\n");
    print_hex("Ciphertext", ct, sizeof(ct));

    /* Alice decapsulates */
    ret = wc_MlKemKey_Decapsulate(alice, ss_alice, ct, sizeof(ct));
    if (ret != 0) { printf("Decaps failed\n"); return ret; }
    printf("Alice: Decapsulation OK\n");

    print_hex("Bob's SS", ss_bob, 32);
    print_hex("Alice's SS", ss_alice, 32);

    if (memcmp(ss_bob, ss_alice, 32) == 0) {
        printf("\n*** ML-KEM SUCCESS: Shared secrets match! ***\n");
    } else {
        printf("\n*** ML-KEM ERROR: Mismatch! ***\n");
    }

    wc_MlKemKey_Free(alice);
    wc_MlKemKey_Free(bob);

    /* AES-GCM Demo */
    printf("\n=== AES-128-GCM ===\n");
    uint8_t aes_key[16] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    uint8_t iv[12], tag[16];
    const char *plaintext = "Hello from RISC-V PQC Client!";
    uint8_t ciphertext[64], decrypted[64];

    wc_RNG_GenerateBlock(&rng, iv, sizeof(iv));

    Aes aes;
    wc_AesGcmSetKey(&aes, aes_key, sizeof(aes_key));
    ret = wc_AesGcmEncrypt(&aes, ciphertext, (uint8_t*)plaintext,
                           strlen(plaintext), iv, sizeof(iv),
                           tag, sizeof(tag), NULL, 0);
    if (ret != 0) { printf("Encrypt failed\n"); return ret; }

    printf("Plaintext:  \"%s\"\n", plaintext);
    print_hex("Ciphertext", ciphertext, strlen(plaintext));
    print_hex("Tag", tag, sizeof(tag));

    ret = wc_AesGcmDecrypt(&aes, decrypted, ciphertext,
                           strlen(plaintext), iv, sizeof(iv),
                           tag, sizeof(tag), NULL, 0);
    if (ret == 0) {
        decrypted[strlen(plaintext)] = 0;
        printf("Decrypted:  \"%s\"\n", decrypted);
        printf("\n*** AES-GCM SUCCESS! ***\n");
    }

    return 0;
}

/*============================================================================
 * Main Entry Point
 *============================================================================*/

int main(void) {
#ifdef CONFIG_CPU_HAS_INTERRUPT
    irq_setmask(0);
    irq_setie(1);
#endif
    uart_init();

    printf("\n\n");
    printf("========================================\n");
    printf("  PQC-DTLS Client for RISC-V IoT\n");
    printf("  Inter IIT Tech Meet 14.0\n");
    printf("========================================\n");
    printf("\n");

    /* Initialize RNG */
    if (wc_InitRng(&rng) != 0) {
        printf("ERROR: RNG init failed\n");
        return -1;
    }
    printf("RNG initialized\n");

    /* Run standalone demo first */
    standalone_demo();

    /* Print key sizes */
    printf("\n========================================\n");
    printf("  ML-KEM-512 Key Sizes:\n");
    printf("    Public Key:  %d bytes\n", WC_ML_KEM_512_PUBLIC_KEY_SIZE);
    printf("    Secret Key:  %d bytes\n", WC_ML_KEM_512_PRIVATE_KEY_SIZE);
    printf("    Ciphertext:  %d bytes\n", WC_ML_KEM_512_CIPHER_TEXT_SIZE);
    printf("    Shared Secret: %d bytes\n", WC_ML_KEM_SS_SZ);
    printf("========================================\n");

    /* Client mode - connect to server */
    printf("\n========================================\n");
    printf("  Client Mode\n");
    printf("  Waiting for server connection...\n");
    printf("  (Press any key or send data to start)\n");
    printf("========================================\n");

    /* Wait for trigger */
    while (!uart_read_nonblock()) {
        /* Idle */
    }
    uart_read();  /* Consume the trigger byte */

    printf("\n[Client] Starting handshake...\n");

    /* Perform handshake */
    if (client_send_hello() != 0) goto error;
    if (client_key_exchange() != 0) goto error;
    if (client_send_finished() != 0) goto error;
    if (client_wait_server_finished() != 0) goto error;

    printf("\n========================================\n");
    printf("  Handshake Complete!\n");
    printf("========================================\n");

    /* Send encrypted application data */
    client_send_encrypted_data("Hello from RISC-V PQC-DTLS Client!");
    client_send_encrypted_data("This message is encrypted with AES-GCM");

    printf("\n*** PQC-DTLS Communication Successful! ***\n");
    goto cleanup;

error:
    printf("\n*** Handshake Failed ***\n");

cleanup:
    wc_FreeRng(&rng);

    printf("\n========================================\n");
    printf("  Demo Complete\n");
    printf("========================================\n");

    while(1);
    return 0;
}
