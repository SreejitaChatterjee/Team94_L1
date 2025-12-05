/**
 * PQC-DTLS Client for Bare-Metal RISC-V with LiteETH
 * Uses UDP over Ethernet instead of UART
 * 
 * CORRECTED for actual LiteX LiteETH API
 * FIXED: Proper handling of SERVER_HELLO before KEY_EXCHANGE
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

#include <irq.h>
#include <libbase/uart.h>
#include <libbase/console.h>
#include <generated/csr.h>

/* LiteETH includes */
#include <libliteeth/udp.h>
#include <libliteeth/mdio.h>

#include <wolfssl/wolfcrypt/settings.h>
#include <wolfssl/wolfcrypt/wc_mlkem.h>
#include <wolfssl/wolfcrypt/random.h>
#include <wolfssl/wolfcrypt/sha256.h>
#include <wolfssl/wolfcrypt/aes.h>

#ifdef min
#undef min
#endif
#ifdef max
#undef max
#endif

/*============================================================================
 * Network Configuration - CHANGE THESE FOR YOUR SETUP
 *============================================================================*/
#define CLIENT_IP_1     192
#define CLIENT_IP_2     168
#define CLIENT_IP_3     1
#define CLIENT_IP_4     50

#define SERVER_IP_1     192
#define SERVER_IP_2     168
#define SERVER_IP_3     1
#define SERVER_IP_4     100

#define CLIENT_PORT     22222
#define SERVER_PORT     11111

/* MAC address for client */
static const uint8_t client_mac[6] = {0x10, 0xe2, 0xd5, 0x00, 0x00, 0x01};

/*============================================================================
 * Protocol Message Types
 *============================================================================*/
#define MSG_CLIENT_HELLO     0x01
#define MSG_SERVER_HELLO     0x02
#define MSG_KEY_EXCHANGE     0x03
#define MSG_ENCRYPTED_DATA   0x04
#define MSG_FINISHED         0x05

#define MAX_PACKET_SIZE      2048
#define UDP_TIMEOUT_MS       5000

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

static uint32_t get_ticks_ms(void) {
#ifdef CSR_TIMER0_BASE
    timer0_update_value_write(1);
    return timer0_value_read() / (CONFIG_CLOCK_FREQUENCY / 1000);
#else
    return tick_count++;
#endif
}

/*============================================================================
 * Global State
 *============================================================================*/
static WC_RNG rng;
static uint8_t shared_secret[32];
static uint8_t client_key[16];
static uint8_t client_iv[12];
static int handshake_complete = 0;

/* Server IP for ARP resolution */
static uint32_t server_ip;

/* UDP RX state - FIXED: properly volatile for ISR access */
static volatile int rx_ready = 0;
static volatile uint32_t rx_length = 0;
static uint8_t rx_buffer[MAX_PACKET_SIZE];

/*============================================================================
 * LiteETH UDP Functions
 *============================================================================*/

/* UDP receive callback - accept any packet from server IP */
static void udp_rx_callback(uint32_t src_ip, uint16_t src_port,
                            uint16_t dst_port, void *data, uint32_t length)
{
    printf("[RX Callback] src_ip=%08lx src_port=%d dst_port=%d len=%lu\n",
           (unsigned long)src_ip, src_port, dst_port, (unsigned long)length);
    printf("[RX Callback] Expected server_ip=%08lx\n", (unsigned long)server_ip);
    
    /* Accept packets from our server (any port) */
    if (src_ip == server_ip && length <= MAX_PACKET_SIZE) {
        memcpy(rx_buffer, data, length);
        rx_length = length;
        rx_ready = 1;
        printf("[RX Callback] ACCEPTED: %lu bytes from server\n", (unsigned long)length);
    } else {
        printf("[RX Callback] REJECTED: src_ip mismatch or length too large\n");
    }
}

static int pqc_eth_init(void)
{
    uint32_t client_ip;
    
    printf("[NET] Initializing LiteETH...\n");
    
    /* Initialize ethernet PHY */
    eth_init();
    
    /* Set up IP addresses */
    client_ip = IPTOINT(CLIENT_IP_1, CLIENT_IP_2, CLIENT_IP_3, CLIENT_IP_4);
    server_ip = IPTOINT(SERVER_IP_1, SERVER_IP_2, SERVER_IP_3, SERVER_IP_4);
    
    printf("[NET] client_ip (IPTOINT) = 0x%08lx\n", (unsigned long)client_ip);
    printf("[NET] server_ip (IPTOINT) = 0x%08lx\n", (unsigned long)server_ip);
    printf("[NET] Expected server: %d.%d.%d.%d = ", SERVER_IP_1, SERVER_IP_2, SERVER_IP_3, SERVER_IP_4);
    printf("0x%02x%02x%02x%02x (big-endian) or 0x%02x%02x%02x%02x (little-endian)\n",
           SERVER_IP_1, SERVER_IP_2, SERVER_IP_3, SERVER_IP_4,
           SERVER_IP_4, SERVER_IP_3, SERVER_IP_2, SERVER_IP_1);
    
    /* Initialize UDP stack with our MAC and IP */
    udp_start(client_mac, client_ip);
    
    /* Register UDP callback for incoming packets */
    udp_set_callback(udp_rx_callback);
    
    printf("[NET] Client IP: %d.%d.%d.%d:%d\n", 
           CLIENT_IP_1, CLIENT_IP_2, CLIENT_IP_3, CLIENT_IP_4, CLIENT_PORT);
    printf("[NET] Server IP: %d.%d.%d.%d:%d\n",
           SERVER_IP_1, SERVER_IP_2, SERVER_IP_3, SERVER_IP_4, SERVER_PORT);
    
    /* Resolve server MAC address via ARP */
    printf("[NET] Resolving server MAC via ARP...\n");
    if (!udp_arp_resolve(server_ip)) {
        printf("[NET] WARNING: ARP resolution failed - server may be unreachable\n");
        return -1;
    }
    printf("[NET] ARP resolution successful\n");
    
    return 0;
}

static int pqc_udp_send_packet(uint8_t msg_type, const uint8_t *data, uint16_t len)
{
    /* Get pointer to TX payload buffer */
    uint8_t *txbuf = (uint8_t *)udp_get_tx_buffer();
    
    /* Build our protocol header: [msg_type:1][length:2] + payload */
    txbuf[0] = msg_type;
    txbuf[1] = (len >> 8) & 0xFF;
    txbuf[2] = len & 0xFF;
    memcpy(txbuf + 3, data, len);
    
    uint32_t total_len = len + 3;
    
    /* Send via LiteETH UDP */
    int ret = udp_send(CLIENT_PORT, SERVER_PORT, total_len);
    
    printf("[TX] Type=0x%02x Len=%d ret=%d\n", msg_type, len, ret);
    return ret ? 0 : -1;  /* udp_send returns 1 on success, 0 on failure */
}

static int pqc_udp_recv_packet(uint8_t *msg_type, uint8_t *data, uint16_t max_len)
{
    uint32_t start_time = get_ticks_ms();
    uint32_t timeout = start_time + UDP_TIMEOUT_MS;
    uint32_t poll_count = 0;
    
    printf("[RX] Waiting for packet (timeout=%dms)...\n", UDP_TIMEOUT_MS);
    printf("[RX] server_ip = %08lx\n", (unsigned long)server_ip);
    printf("[RX] rx_ready before service = %d\n", rx_ready);
    
    /* First, service any pending packets that might already be buffered */
    printf("[RX] Initial service loop...\n");
    for (int i = 0; i < 1000; i++) {
        udp_service();
        if (rx_ready) {
            printf("[RX] Packet arrived during initial service!\n");
            break;
        }
    }
    
    /* Check if a packet already arrived */
    if (rx_ready) {
        printf("[RX] Packet was already waiting!\n");
        goto process_packet;
    }
    
    /* Poll for incoming packet */
    printf("[RX] Entering main polling loop...\n");
    
    while (!rx_ready) {
        /* Service ethernet - processes incoming packets and triggers callback */
        udp_service();
        poll_count++;
        
        /* Print progress every 100000 polls */
        if ((poll_count % 100000) == 0) {
            printf("[RX] Polling... count=%lu, rx_ready=%d, ticks=%lu\n", 
                   (unsigned long)poll_count, rx_ready, (unsigned long)get_ticks_ms());
        }
        
        if (get_ticks_ms() > timeout) {
            printf("[RX] Timeout after %dms (polls=%lu)\n", UDP_TIMEOUT_MS, (unsigned long)poll_count);
            printf("[RX] Final rx_ready = %d\n", rx_ready);
            return -1;
        }
    }

process_packet:
    printf("[RX] Processing packet: length=%lu\n", (unsigned long)rx_length);
    
    /* Clear the flag for next receive */
    rx_ready = 0;
    
    /* Parse our protocol header */
    if (rx_length < 3) {
        printf("[RX] Packet too small: %lu bytes\n", (unsigned long)rx_length);
        return -2;
    }
    
    *msg_type = rx_buffer[0];
    uint16_t len = (rx_buffer[1] << 8) | rx_buffer[2];
    
    if (len > max_len || len > rx_length - 3) {
        printf("[RX] Invalid length: %d (max=%d, available=%lu)\n", 
               len, max_len, (unsigned long)(rx_length - 3));
        return -3;
    }
    
    memcpy(data, rx_buffer + 3, len);
    
    printf("[RX] Success: Type=0x%02x Len=%d\n", *msg_type, len);
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
 * PQC-DTLS Client Protocol - FIXED VERSION
 *============================================================================*/

static int client_send_hello(void) {
    printf("\n[Client] Sending ClientHello...\n");

    uint8_t client_random[32];
    wc_RNG_GenerateBlock(&rng, client_random, sizeof(client_random));

    if (pqc_udp_send_packet(MSG_CLIENT_HELLO, client_random, sizeof(client_random)) != 0) {
        printf("ERROR: Failed to send ClientHello\n");
        return -1;
    }
    print_hex("ClientRandom", client_random, 32);

    return 0;
}

/* NEW: Wait for ServerHello before proceeding */
static int client_wait_server_hello(void) {
    printf("\n[Client] Waiting for ServerHello...\n");
    
    uint8_t buffer[MAX_PACKET_SIZE];
    uint8_t msg_type;
    
    int len = pqc_udp_recv_packet(&msg_type, buffer, sizeof(buffer));
    if (len < 0) {
        printf("ERROR: No ServerHello received (error=%d)\n", len);
        return -1;
    }
    
    if (msg_type != MSG_SERVER_HELLO) {
        printf("ERROR: Expected SERVER_HELLO (0x%02x), got 0x%02x\n", MSG_SERVER_HELLO, msg_type);
        return -1;
    }
    
    if (len != 32) {
        printf("ERROR: Invalid ServerRandom size: %d\n", len);
        return -1;
    }
    
    print_hex("ServerRandom", buffer, 32);
    printf("[Client] ServerHello received OK\n");
    
    return 0;
}

static int client_key_exchange(void) {
    int ret;
    uint8_t buffer[MAX_PACKET_SIZE];
    uint8_t msg_type;

    printf("\n[Client] Generating ML-KEM key pair...\n");

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

    uint8_t pub_key[WC_ML_KEM_512_PUBLIC_KEY_SIZE];
    wc_MlKemKey_EncodePublicKey(key, pub_key, sizeof(pub_key));
    print_hex("Client PubKey", pub_key, sizeof(pub_key));

    if (pqc_udp_send_packet(MSG_KEY_EXCHANGE, pub_key, sizeof(pub_key)) != 0) {
        printf("ERROR: Failed to send public key\n");
        wc_MlKemKey_Free(key);
        return -1;
    }
    printf("[Client] Sent public key to server\n");

    printf("[Client] Waiting for server ciphertext...\n");
    int len = pqc_udp_recv_packet(&msg_type, buffer, sizeof(buffer));
    if (len < 0) {
        printf("ERROR: No response from server (error=%d)\n", len);
        wc_MlKemKey_Free(key);
        return -1;
    }
    
    if (msg_type != MSG_KEY_EXCHANGE) {
        printf("ERROR: Expected KEY_EXCHANGE (0x%02x), got 0x%02x\n", MSG_KEY_EXCHANGE, msg_type);
        wc_MlKemKey_Free(key);
        return -1;
    }

    if (len != WC_ML_KEM_512_CIPHER_TEXT_SIZE) {
        printf("ERROR: Invalid ciphertext size: %d (expected %d)\n", 
               len, WC_ML_KEM_512_CIPHER_TEXT_SIZE);
        wc_MlKemKey_Free(key);
        return -1;
    }

    print_hex("Server CT", buffer, len);

    printf("[Client] Decapsulating shared secret...\n");
    ret = wc_MlKemKey_Decapsulate(key, shared_secret, buffer, len);
    wc_MlKemKey_Free(key);

    if (ret != 0) {
        printf("ERROR: Decapsulation failed: %d\n", ret);
        return ret;
    }

    print_hex("Shared Secret", shared_secret, sizeof(shared_secret));
    derive_keys(shared_secret);

    return 0;
}

static int client_send_finished(void) {
    printf("\n[Client] Sending Finished message...\n");

    const char *finished_msg = "CLIENT_FINISHED";
    uint8_t ciphertext[64];
    uint8_t tag[16];

    Aes aes;
    wc_AesGcmSetKey(&aes, client_key, sizeof(client_key));

    int ret = wc_AesGcmEncrypt(&aes, ciphertext, (uint8_t*)finished_msg,
                                strlen(finished_msg), client_iv, sizeof(client_iv),
                                tag, sizeof(tag), NULL, 0);
    if (ret != 0) {
        printf("ERROR: Encrypt failed: %d\n", ret);
        return ret;
    }

    uint8_t packet[80];
    memcpy(packet, ciphertext, strlen(finished_msg));
    memcpy(packet + strlen(finished_msg), tag, 16);

    if (pqc_udp_send_packet(MSG_FINISHED, packet, strlen(finished_msg) + 16) != 0) {
        printf("ERROR: Failed to send Finished\n");
        return -1;
    }

    return 0;
}

static int client_wait_server_finished(void) {
    printf("\n[Client] Waiting for server Finished...\n");

    uint8_t buffer[MAX_PACKET_SIZE];
    uint8_t msg_type;

    int len = pqc_udp_recv_packet(&msg_type, buffer, sizeof(buffer));
    if (len < 0) {
        printf("ERROR: No response from server\n");
        return -1;
    }

    if (msg_type == MSG_FINISHED) {
        printf("[Client] Received server Finished\n");
        handshake_complete = 1;
        return 0;
    }

    printf("ERROR: Unexpected message type: 0x%02x\n", msg_type);
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

    memcpy(iv, client_iv, sizeof(iv));
    iv[11]++;  /* Increment IV for each message */

    Aes aes;
    wc_AesGcmSetKey(&aes, client_key, sizeof(client_key));

    int ret = wc_AesGcmEncrypt(&aes, ciphertext, (uint8_t*)message,
                                strlen(message), iv, sizeof(iv),
                                tag, sizeof(tag), NULL, 0);
    if (ret != 0) {
        printf("ERROR: Encrypt failed: %d\n", ret);
        return ret;
    }

    uint8_t packet[284];
    int pkt_len = 0;
    memcpy(packet + pkt_len, iv, 12); pkt_len += 12;
    memcpy(packet + pkt_len, ciphertext, strlen(message)); pkt_len += strlen(message);
    memcpy(packet + pkt_len, tag, 16); pkt_len += 16;

    if (pqc_udp_send_packet(MSG_ENCRYPTED_DATA, packet, pkt_len) != 0) {
        printf("ERROR: Failed to send encrypted data\n");
        return -1;
    }

    print_hex("Ciphertext", ciphertext, strlen(message));
    return 0;
}

/*============================================================================
 * Standalone Crypto Demo
 *============================================================================*/

static int standalone_demo(void) {
    int ret;

    printf("\n========================================\n");
    printf("  Standalone PQC Demo\n");
    printf("========================================\n");

    printf("\n=== ML-KEM-512 Key Exchange ===\n");

    MlKemKey *alice = wc_MlKemKey_New(WC_ML_KEM_512, NULL, INVALID_DEVID);
    MlKemKey *bob = wc_MlKemKey_New(WC_ML_KEM_512, NULL, INVALID_DEVID);

    if (!alice || !bob) {
        printf("Key allocation failed\n");
        return -1;
    }

    ret = wc_MlKemKey_MakeKey(alice, &rng);
    if (ret != 0) { printf("KeyGen failed: %d\n", ret); return ret; }
    printf("Alice: KeyGen OK\n");

    uint8_t alice_pub[WC_ML_KEM_512_PUBLIC_KEY_SIZE];
    wc_MlKemKey_EncodePublicKey(alice, alice_pub, sizeof(alice_pub));

    wc_MlKemKey_DecodePublicKey(bob, alice_pub, sizeof(alice_pub));
    uint8_t ct[WC_ML_KEM_512_CIPHER_TEXT_SIZE];
    uint8_t ss_bob[32], ss_alice[32];

    ret = wc_MlKemKey_Encapsulate(bob, ct, ss_bob, &rng);
    if (ret != 0) { printf("Encaps failed: %d\n", ret); return ret; }
    printf("Bob: Encapsulation OK\n");

    ret = wc_MlKemKey_Decapsulate(alice, ss_alice, ct, sizeof(ct));
    if (ret != 0) { printf("Decaps failed: %d\n", ret); return ret; }
    printf("Alice: Decapsulation OK\n");

    if (memcmp(ss_bob, ss_alice, 32) == 0) {
        printf("\n*** ML-KEM SUCCESS - Shared secrets match! ***\n");
        print_hex("Shared Secret", ss_alice, 32);
    } else {
        printf("\n*** ML-KEM ERROR - Shared secrets don't match! ***\n");
    }

    wc_MlKemKey_Free(alice);
    wc_MlKemKey_Free(bob);

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
    printf("  PQC-DTLS Client (LiteETH UDP)\n");
    printf("========================================\n\n");

    /* Initialize RNG */
    if (wc_InitRng(&rng) != 0) {
        printf("ERROR: RNG init failed\n");
        return -1;
    }
    printf("RNG initialized\n");

    /* Initialize network */
    if (pqc_eth_init() != 0) {
        printf("ERROR: Network init failed\n");
        printf("Continuing with standalone demo only...\n");
        standalone_demo();
        goto done;
    }

    /* Run standalone demo first */
    standalone_demo();

    printf("\n========================================\n");
    printf("  Starting Client Mode...\n");
    printf("  Server: %d.%d.%d.%d:%d\n",
           SERVER_IP_1, SERVER_IP_2, SERVER_IP_3, SERVER_IP_4, SERVER_PORT);
    printf("========================================\n");

    /* Small delay to let network settle */
    printf("[Client] Waiting for network to settle...\n");
    for (volatile int i = 0; i < 1000000; i++);

    printf("\n[Client] Starting handshake...\n");

    /* Perform handshake - FIXED ORDER */
    if (client_send_hello() != 0) goto error;
    if (client_wait_server_hello() != 0) goto error;  /* NEW: Wait for ServerHello */
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

done:
    printf("\nDemo Complete - entering idle loop\n");
    while(1) {
        /* Keep servicing network for any incoming packets */
        udp_service();
    }
    return 0;
}