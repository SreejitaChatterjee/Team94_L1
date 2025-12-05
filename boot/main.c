/**
 * PQC-DTLS 1.3 Client for Bare-Metal RISC-V with LiteETH
 * Uses wolfSSL's full DTLS 1.3 implementation with ML-KEM
 * Custom I/O callbacks for LiteETH UDP
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

/* wolfSSL includes */
#include <wolfssl/wolfcrypt/settings.h>
#include <wolfssl/ssl.h>
#include <wolfssl/wolfcrypt/random.h>

/*============================================================================
 * Network Configuration
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

static const uint8_t client_mac[6] = {0x10, 0xe2, 0xd5, 0x00, 0x00, 0x01};

#define MAX_PACKET_SIZE      4096
#define DTLS_TIMEOUT_SEC     5

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

static uint32_t tick_count = 0;

time_t XTIME(time_t *t) {
    time_t now = tick_count / 1000;
    if (t) *t = now;
    return now;
}

static uint32_t get_ticks_ms(void) {
#ifdef CSR_TIMER0_BASE
    timer0_update_value_write(1);
    uint32_t val = timer0_value_read();
    return val / (CONFIG_CLOCK_FREQUENCY / 1000);
#else
    return tick_count++;
#endif
}

/*============================================================================
 * Global State
 *============================================================================*/
static uint32_t server_ip;
static uint32_t client_ip_addr;

/* RX Ring Buffer for incoming packets */
#define RX_RING_SIZE 8
static struct {
    uint8_t data[MAX_PACKET_SIZE];
    uint32_t len;
    int valid;
} rx_ring[RX_RING_SIZE];
static volatile int rx_ring_head = 0;
static volatile int rx_ring_tail = 0;

/*============================================================================
 * LiteETH UDP Receive Callback
 *============================================================================*/
static void udp_rx_callback(uint32_t src_ip, uint16_t src_port,
                            uint16_t dst_port, void *data, uint32_t length)
{
    (void)src_port;
    (void)dst_port;

    printf("[LiteETH RX] src=%08lx len=%lu\n", (unsigned long)src_ip, (unsigned long)length);

    /* Accept packets from server */
    if (src_ip == server_ip && length <= MAX_PACKET_SIZE) {
        int next_head = (rx_ring_head + 1) % RX_RING_SIZE;
        if (next_head != rx_ring_tail) {  /* Not full */
            memcpy(rx_ring[rx_ring_head].data, data, length);
            rx_ring[rx_ring_head].len = length;
            rx_ring[rx_ring_head].valid = 1;
            rx_ring_head = next_head;
            printf("[LiteETH RX] Packet queued, head=%d\n", rx_ring_head);
        } else {
            printf("[LiteETH RX] Ring buffer full, dropping packet\n");
        }
    }
}

/*============================================================================
 * wolfSSL Custom I/O Callbacks
 *============================================================================*/

/* Context passed to wolfSSL I/O callbacks */
typedef struct {
    uint32_t server_ip;
    uint16_t server_port;
    uint16_t client_port;
    uint32_t timeout_ms;
} dtls_io_ctx_t;

static dtls_io_ctx_t io_ctx;

/**
 * wolfSSL Send Callback - sends data via LiteETH
 */
static int dtls_send_cb(WOLFSSL* ssl, char* buf, int sz, void* ctx)
{
    dtls_io_ctx_t* io = (dtls_io_ctx_t*)ctx;
    (void)ssl;

    printf("[DTLS TX] Sending %d bytes\n", sz);

    /* Get TX buffer and copy data */
    uint8_t* txbuf = (uint8_t*)udp_get_tx_buffer();
    memcpy(txbuf, buf, sz);

    /* Send via LiteETH */
    int ret = udp_send(io->client_port, io->server_port, sz);

    if (ret) {
        printf("[DTLS TX] Success\n");
        return sz;
    } else {
        printf("[DTLS TX] Failed\n");
        return WOLFSSL_CBIO_ERR_GENERAL;
    }
}

/**
 * wolfSSL Receive Callback - receives data from LiteETH ring buffer
 */
static int dtls_recv_cb(WOLFSSL* ssl, char* buf, int sz, void* ctx)
{
    dtls_io_ctx_t* io = (dtls_io_ctx_t*)ctx;
    (void)ssl;

    uint32_t start = get_ticks_ms();
    uint32_t timeout = start + io->timeout_ms;

    printf("[DTLS RX] Waiting for data (max %d bytes, timeout %lu ms)\n",
           sz, (unsigned long)io->timeout_ms);

    /* Poll until we get data or timeout */
    while (get_ticks_ms() < timeout) {
        /* Service LiteETH */
        udp_service();

        /* Check if we have data in the ring buffer */
        if (rx_ring_tail != rx_ring_head && rx_ring[rx_ring_tail].valid) {
            uint32_t pkt_len = rx_ring[rx_ring_tail].len;
            int copy_len = (pkt_len <= (uint32_t)sz) ? pkt_len : sz;

            printf("[DTLS RX] Got packet: %lu bytes, copying %d\n",
                   (unsigned long)pkt_len, copy_len);

            memcpy(buf, rx_ring[rx_ring_tail].data, copy_len);
            rx_ring[rx_ring_tail].valid = 0;
            rx_ring_tail = (rx_ring_tail + 1) % RX_RING_SIZE;

            return copy_len;
        }
    }

    printf("[DTLS RX] Timeout\n");
    return WOLFSSL_CBIO_ERR_TIMEOUT;
}

/**
 * wolfSSL DTLS Generate Cookie Callback
 */
static int dtls_gen_cookie_cb(WOLFSSL* ssl, unsigned char* buf, int sz, void* ctx)
{
    (void)ssl;
    (void)ctx;

    /* Generate a simple cookie */
    WC_RNG rng;
    wc_InitRng(&rng);
    wc_RNG_GenerateBlock(&rng, buf, sz);
    wc_FreeRng(&rng);

    return sz;
}

/*============================================================================
 * Network Initialization
 *============================================================================*/
static int pqc_eth_init(void)
{
    printf("[NET] Initializing LiteETH...\n");

    /* Initialize ethernet PHY */
    eth_init();

    /* Set up IP addresses */
    client_ip_addr = IPTOINT(CLIENT_IP_1, CLIENT_IP_2, CLIENT_IP_3, CLIENT_IP_4);
    server_ip = IPTOINT(SERVER_IP_1, SERVER_IP_2, SERVER_IP_3, SERVER_IP_4);

    printf("[NET] client_ip = 0x%08lx\n", (unsigned long)client_ip_addr);
    printf("[NET] server_ip = 0x%08lx\n", (unsigned long)server_ip);

    /* Initialize UDP stack */
    udp_start(client_mac, client_ip_addr);

    /* Register callback */
    udp_set_callback(udp_rx_callback);

    printf("[NET] Client: %d.%d.%d.%d:%d\n",
           CLIENT_IP_1, CLIENT_IP_2, CLIENT_IP_3, CLIENT_IP_4, CLIENT_PORT);
    printf("[NET] Server: %d.%d.%d.%d:%d\n",
           SERVER_IP_1, SERVER_IP_2, SERVER_IP_3, SERVER_IP_4, SERVER_PORT);

    /* ARP resolution */
    printf("[NET] Resolving server MAC via ARP...\n");
    if (!udp_arp_resolve(server_ip)) {
        printf("[NET] ARP resolution failed\n");
        return -1;
    }
    printf("[NET] ARP resolution successful\n");

    /* Initialize I/O context */
    io_ctx.server_ip = server_ip;
    io_ctx.server_port = SERVER_PORT;
    io_ctx.client_port = CLIENT_PORT;
    io_ctx.timeout_ms = DTLS_TIMEOUT_SEC * 1000;

    return 0;
}

/*============================================================================
 * DTLS 1.3 Client with PQC
 *============================================================================*/
static int dtls13_pqc_client(void)
{
    WOLFSSL_CTX* ctx = NULL;
    WOLFSSL* ssl = NULL;
    int ret;
    char buffer[256];
    const char* msg = "Hello from RISC-V PQC-DTLS 1.3 Client!";

    printf("\n========================================\n");
    printf("  DTLS 1.3 Client with ML-KEM\n");
    printf("========================================\n\n");

    /* Initialize wolfSSL */
    printf("[DTLS] Initializing wolfSSL...\n");
    wolfSSL_Init();

#ifdef DEBUG_WOLFSSL
    wolfSSL_Debugging_ON();
#endif

    /* Create DTLS 1.3 context */
    printf("[DTLS] Creating DTLS 1.3 context...\n");
#ifdef WOLFSSL_DTLS13
    ctx = wolfSSL_CTX_new(wolfDTLSv1_3_client_method());
#else
    ctx = wolfSSL_CTX_new(wolfDTLSv1_2_client_method());
    printf("[DTLS] Note: Using DTLS 1.2 (DTLS 1.3 not compiled in)\n");
#endif

    if (ctx == NULL) {
        printf("ERROR: wolfSSL_CTX_new failed\n");
        return -1;
    }

    /* Configure for anonymous/PSK mode (no certificates for demo) */
    printf("[DTLS] Configuring cipher suites...\n");

#ifdef WOLFSSL_TLS13
    /* Try to set ML-KEM/Kyber key exchange */
#if defined(HAVE_LIBOQS) || defined(WOLFSSL_HAVE_KYBER)
    ret = wolfSSL_CTX_set_groups(ctx, (int[]){1}, 1);
    if (ret != WOLFSSL_SUCCESS) {
        printf("[DTLS] ML-KEM not available, using default groups\n");
    } else {
        printf("[DTLS] ML-KEM-512 enabled for key exchange\n");
    }
#endif
#endif

    /* Disable certificate verification for demo */
    wolfSSL_CTX_set_verify(ctx, SSL_VERIFY_NONE, NULL);

    /* Set I/O callbacks */
    printf("[DTLS] Setting custom I/O callbacks...\n");
    wolfSSL_CTX_SetIORecv(ctx, dtls_recv_cb);
    wolfSSL_CTX_SetIOSend(ctx, dtls_send_cb);

    /* Create SSL session */
    printf("[DTLS] Creating SSL session...\n");
    ssl = wolfSSL_new(ctx);
    if (ssl == NULL) {
        printf("ERROR: wolfSSL_new failed\n");
        wolfSSL_CTX_free(ctx);
        return -1;
    }

    /* Set I/O context */
    wolfSSL_SetIOReadCtx(ssl, &io_ctx);
    wolfSSL_SetIOWriteCtx(ssl, &io_ctx);

    /* Set DTLS options */
    wolfSSL_dtls_set_using_nonblock(ssl, 0);

#ifdef WOLFSSL_DTLS13
    /* Set MTU for DTLS */
    wolfSSL_dtls_set_mtu(ssl, 1400);
#endif

    /* Perform DTLS handshake */
    printf("[DTLS] Starting handshake...\n");

    do {
        ret = wolfSSL_connect(ssl);
        if (ret != WOLFSSL_SUCCESS) {
            int err = wolfSSL_get_error(ssl, ret);
            if (err == WOLFSSL_ERROR_WANT_READ || err == WOLFSSL_ERROR_WANT_WRITE) {
                printf("[DTLS] Handshake in progress (want %s)\n",
                       err == WOLFSSL_ERROR_WANT_READ ? "read" : "write");
                /* Service network */
                for (int i = 0; i < 1000; i++) {
                    udp_service();
                }
            } else {
                char errStr[80];
                wolfSSL_ERR_error_string(err, errStr);
                printf("ERROR: wolfSSL_connect failed: %d (%s)\n", err, errStr);
                wolfSSL_free(ssl);
                wolfSSL_CTX_free(ctx);
                return -1;
            }
        }
    } while (ret != WOLFSSL_SUCCESS);

    printf("\n========================================\n");
    printf("  DTLS Handshake Complete!\n");
    printf("========================================\n\n");

    /* Print connection info */
    printf("[DTLS] Protocol: %s\n", wolfSSL_get_version(ssl));
    printf("[DTLS] Cipher: %s\n", wolfSSL_get_cipher(ssl));

    /* Send application data */
    printf("[DTLS] Sending: \"%s\"\n", msg);
    ret = wolfSSL_write(ssl, msg, strlen(msg));
    if (ret <= 0) {
        printf("ERROR: wolfSSL_write failed\n");
    } else {
        printf("[DTLS] Sent %d bytes\n", ret);
    }

    /* Receive response */
    printf("[DTLS] Waiting for response...\n");
    memset(buffer, 0, sizeof(buffer));
    ret = wolfSSL_read(ssl, buffer, sizeof(buffer) - 1);
    if (ret > 0) {
        printf("[DTLS] Received: \"%s\"\n", buffer);
    } else {
        int err = wolfSSL_get_error(ssl, ret);
        printf("[DTLS] Read returned %d (error: %d)\n", ret, err);
    }

    /* Shutdown */
    printf("[DTLS] Closing connection...\n");
    wolfSSL_shutdown(ssl);
    wolfSSL_free(ssl);
    wolfSSL_CTX_free(ctx);
    wolfSSL_Cleanup();

    printf("\n*** DTLS 1.3 PQC Demo Complete ***\n");

    return 0;
}

/*============================================================================
 * Standalone ML-KEM Test
 *============================================================================*/
static int standalone_mlkem_test(void)
{
    printf("\n========================================\n");
    printf("  Standalone ML-KEM-512 Test\n");
    printf("========================================\n\n");

#if defined(WOLFSSL_HAVE_MLKEM) || defined(WOLFSSL_WC_MLKEM)
    #include <wolfssl/wolfcrypt/wc_mlkem.h>

    int ret;
    WC_RNG rng;

    wc_InitRng(&rng);

    MlKemKey *alice = wc_MlKemKey_New(WC_ML_KEM_512, NULL, INVALID_DEVID);
    MlKemKey *bob = wc_MlKemKey_New(WC_ML_KEM_512, NULL, INVALID_DEVID);

    if (!alice || !bob) {
        printf("Key allocation failed\n");
        return -1;
    }

    /* Alice: Generate keypair */
    ret = wc_MlKemKey_MakeKey(alice, &rng);
    if (ret != 0) {
        printf("Alice KeyGen failed: %d\n", ret);
        return ret;
    }
    printf("Alice: KeyGen OK\n");

    /* Alice: Export public key */
    uint8_t alice_pub[WC_ML_KEM_512_PUBLIC_KEY_SIZE];
    wc_MlKemKey_EncodePublicKey(alice, alice_pub, sizeof(alice_pub));

    /* Bob: Load Alice's public key and encapsulate */
    wc_MlKemKey_DecodePublicKey(bob, alice_pub, sizeof(alice_pub));

    uint8_t ct[WC_ML_KEM_512_CIPHER_TEXT_SIZE];
    uint8_t ss_bob[32], ss_alice[32];

    ret = wc_MlKemKey_Encapsulate(bob, ct, ss_bob, &rng);
    if (ret != 0) {
        printf("Bob Encaps failed: %d\n", ret);
        return ret;
    }
    printf("Bob: Encapsulation OK\n");

    /* Alice: Decapsulate */
    ret = wc_MlKemKey_Decapsulate(alice, ss_alice, ct, sizeof(ct));
    if (ret != 0) {
        printf("Alice Decaps failed: %d\n", ret);
        return ret;
    }
    printf("Alice: Decapsulation OK\n");

    /* Verify */
    if (memcmp(ss_bob, ss_alice, 32) == 0) {
        printf("\n*** ML-KEM SUCCESS - Shared secrets match! ***\n");
    } else {
        printf("\n*** ML-KEM FAILED - Secrets don't match ***\n");
    }

    wc_MlKemKey_Free(alice);
    wc_MlKemKey_Free(bob);
    wc_FreeRng(&rng);

#else
    printf("ML-KEM not compiled in. Enable with:\n");
    printf("  WOLFSSL_HAVE_MLKEM or WOLFSSL_WC_MLKEM\n");
#endif

    return 0;
}

/*============================================================================
 * Main Entry Point
 *============================================================================*/
int main(void)
{
#ifdef CONFIG_CPU_HAS_INTERRUPT
    irq_setmask(0);
    irq_setie(1);
#endif
    uart_init();

    printf("\n\n");
    printf("========================================\n");
    printf("  PQC-DTLS 1.3 Client (LiteETH)\n");
    printf("  wolfSSL + ML-KEM-512\n");
    printf("========================================\n\n");

    /* Initialize network */
    if (pqc_eth_init() != 0) {
        printf("ERROR: Network init failed\n");
        // printf("Running standalone ML-KEM test only...\n");
        // standalone_mlkem_test();
        goto idle;
    }

    /* Run standalone test first */
    // standalone_mlkem_test();

    /* Small delay */
    printf("\n[Main] Waiting for network to settle...\n");
    for (volatile int i = 0; i < 1000000; i++);

    /* Run DTLS client */
    dtls13_pqc_client();

idle:
    printf("\nEntering idle loop...\n");
    while (1) {
        udp_service();
    }

    return 0;
}
