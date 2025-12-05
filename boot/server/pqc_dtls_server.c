/**
 * PQC-DTLS 1.3 Server for Linux
 * Uses wolfSSL's full DTLS 1.3 implementation with ML-KEM
 *
 * Build: gcc -o pqc_dtls_server pqc_dtls_server.c -lwolfssl -lpthread
 * Run:   ./pqc_dtls_server
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <unistd.h>
#include <signal.h>
#include <errno.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

#include <wolfssl/options.h>
#include <wolfssl/ssl.h>
#include <wolfssl/wolfcrypt/settings.h>
#include <wolfssl/error-ssl.h>

/*============================================================================
 * Configuration
 *============================================================================*/
#define SERVER_PORT     11111
#define MAX_MSG_SIZE    4096
#define READ_TIMEOUT_SEC 30

static volatile int running = 1;

/*============================================================================
 * Signal Handler
 *============================================================================*/
static void sig_handler(int sig)
{
    (void)sig;
    printf("\nShutting down...\n");
    running = 0;
}

/*============================================================================
 * DTLS 1.3 Server
 *============================================================================*/
static int run_dtls_server(void)
{
    WOLFSSL_CTX* ctx = NULL;
    WOLFSSL* ssl = NULL;
    int sockfd = -1;
    int ret;
    struct sockaddr_in servAddr, cliAddr;
    socklen_t cliLen = sizeof(cliAddr);
    char buffer[MAX_MSG_SIZE];
    const char* reply = "I hear you fa shizzle!";

    printf("\n========================================\n");
    printf("  DTLS 1.3 Server with ML-KEM\n");
    printf("========================================\n\n");

    /* Initialize wolfSSL */
    printf("[Server] Initializing wolfSSL...\n");
    wolfSSL_Init();

#ifdef DEBUG_WOLFSSL
    wolfSSL_Debugging_ON();
#endif

    /* Create DTLS 1.3 context */
    printf("[Server] Creating DTLS 1.3 context...\n");
#ifdef WOLFSSL_DTLS13
    ctx = wolfSSL_CTX_new(wolfDTLSv1_3_server_method());
#else
    ctx = wolfSSL_CTX_new(wolfDTLSv1_2_server_method());
    printf("[Server] Note: Using DTLS 1.2 (DTLS 1.3 not available)\n");
#endif

    if (ctx == NULL) {
        printf("ERROR: wolfSSL_CTX_new failed\n");
        return -1;
    }

    /* Load certificates and keys */
    printf("[Server] Loading certificates...\n");

    /* Try to load default wolfSSL test certs */
    if (wolfSSL_CTX_use_certificate_file(ctx,
            "../certs/server-cert.pem", SSL_FILETYPE_PEM) != SSL_SUCCESS) {
        /* Try alternate path */
        if (wolfSSL_CTX_use_certificate_file(ctx,
                "/etc/ssl/certs/ssl-cert-snakeoil.pem", SSL_FILETYPE_PEM) != SSL_SUCCESS) {
            printf("WARNING: Could not load certificate, continuing anyway\n");
        }
    }

    if (wolfSSL_CTX_use_PrivateKey_file(ctx,
            "../certs/server-key.pem", SSL_FILETYPE_PEM) != SSL_SUCCESS) {
        if (wolfSSL_CTX_use_PrivateKey_file(ctx,
                "/etc/ssl/private/ssl-cert-snakeoil.key", SSL_FILETYPE_PEM) != SSL_SUCCESS) {
            printf("WARNING: Could not load private key, continuing anyway\n");
        }
    }

    /* Configure for maximum compatibility */
    wolfSSL_CTX_set_verify(ctx, SSL_VERIFY_NONE, NULL);

#ifdef WOLFSSL_TLS13
    /* Enable ML-KEM/Kyber if available */
#if defined(HAVE_LIBOQS) || defined(WOLFSSL_HAVE_KYBER)
    printf("[Server] Enabling ML-KEM key exchange...\n");
    ret = wolfSSL_CTX_set_groups(ctx, (int[]){WOLFSSL_KYBER_LEVEL1,
                                               WOLFSSL_ECC_SECP256R1}, 2);
    if (ret != WOLFSSL_SUCCESS) {
        printf("[Server] Note: ML-KEM not available, using ECC only\n");
    }
#endif
#endif

    /* Create UDP socket */
    printf("[Server] Creating UDP socket...\n");
    sockfd = socket(AF_INET, SOCK_DGRAM, 0);
    if (sockfd < 0) {
        perror("socket");
        wolfSSL_CTX_free(ctx);
        return -1;
    }

    int optval = 1;
    setsockopt(sockfd, SOL_SOCKET, SO_REUSEADDR, &optval, sizeof(optval));

    memset(&servAddr, 0, sizeof(servAddr));
    servAddr.sin_family = AF_INET;
    servAddr.sin_port = htons(SERVER_PORT);
    servAddr.sin_addr.s_addr = INADDR_ANY;

    if (bind(sockfd, (struct sockaddr*)&servAddr, sizeof(servAddr)) < 0) {
        perror("bind");
        close(sockfd);
        wolfSSL_CTX_free(ctx);
        return -1;
    }

    printf("[Server] Listening on port %d\n", SERVER_PORT);
    printf("[Server] Waiting for DTLS connection...\n\n");

    while (running) {
        /* Wait for initial packet to get client address */
        printf("[Server] Waiting for Client Hello...\n");

        memset(&cliAddr, 0, sizeof(cliAddr));
        cliLen = sizeof(cliAddr);

        /* Peek at incoming packet to get client address */
        ret = recvfrom(sockfd, buffer, sizeof(buffer), MSG_PEEK,
                       (struct sockaddr*)&cliAddr, &cliLen);
        if (ret < 0) {
            if (errno == EINTR) continue;
            perror("recvfrom");
            break;
        }

        printf("[Server] Received %d bytes from %s:%d\n",
               ret, inet_ntoa(cliAddr.sin_addr), ntohs(cliAddr.sin_port));

        /* Create new SSL session for this client */
        ssl = wolfSSL_new(ctx);
        if (ssl == NULL) {
            printf("ERROR: wolfSSL_new failed\n");
            continue;
        }

        /* Attach socket */
        wolfSSL_set_fd(ssl, sockfd);

        /* Set the client address for DTLS */
        ret = wolfSSL_dtls_set_peer(ssl, &cliAddr, cliLen);
        if (ret != WOLFSSL_SUCCESS) {
            printf("ERROR: wolfSSL_dtls_set_peer failed\n");
            wolfSSL_free(ssl);
            continue;
        }

        /* Perform DTLS handshake */
        printf("[Server] Starting DTLS handshake...\n");

        ret = wolfSSL_accept(ssl);
        if (ret != WOLFSSL_SUCCESS) {
            int err = wolfSSL_get_error(ssl, ret);
            char errStr[256];
            wolfSSL_ERR_error_string(err, errStr);
            printf("ERROR: wolfSSL_accept failed: %d (%s)\n", err, errStr);
            wolfSSL_free(ssl);

            /* Drain the socket */
            recv(sockfd, buffer, sizeof(buffer), MSG_DONTWAIT);
            continue;
        }

        printf("\n========================================\n");
        printf("  DTLS Handshake Complete!\n");
        printf("========================================\n\n");

        printf("[Server] Protocol: %s\n", wolfSSL_get_version(ssl));
        printf("[Server] Cipher: %s\n", wolfSSL_get_cipher(ssl));

#if defined(WOLFSSL_TLS13) && (defined(HAVE_LIBOQS) || defined(WOLFSSL_HAVE_KYBER))
        /* Check if PQC was used */
        const char* kexName = wolfSSL_get_curve_name(ssl);
        if (kexName) {
            printf("[Server] Key Exchange: %s\n", kexName);
        }
#endif

        /* Read client message */
        printf("[Server] Waiting for client message...\n");
        memset(buffer, 0, sizeof(buffer));
        ret = wolfSSL_read(ssl, buffer, sizeof(buffer) - 1);
        if (ret > 0) {
            printf("[Server] Received: \"%s\"\n", buffer);

            /* Send response */
            printf("[Server] Sending: \"%s\"\n", reply);
            ret = wolfSSL_write(ssl, reply, strlen(reply));
            if (ret <= 0) {
                printf("ERROR: wolfSSL_write failed\n");
            }
        } else {
            int err = wolfSSL_get_error(ssl, ret);
            printf("[Server] Read error: %d\n", err);
        }

        /* Shutdown */
        printf("[Server] Closing connection\n\n");
        wolfSSL_shutdown(ssl);
        wolfSSL_free(ssl);
        ssl = NULL;

        /* Clear any pending data */
        recv(sockfd, buffer, sizeof(buffer), MSG_DONTWAIT);
    }

    /* Cleanup */
    if (sockfd >= 0) close(sockfd);
    wolfSSL_CTX_free(ctx);
    wolfSSL_Cleanup();

    printf("[Server] Done\n");
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

#if defined(WOLFSSL_HAVE_MLKEM) || defined(WOLFSSL_WC_MLKEM) || defined(WOLFSSL_HAVE_KYBER)
    #include <wolfssl/wolfcrypt/wc_mlkem.h>
    #include <wolfssl/wolfcrypt/random.h>

    int ret;
    WC_RNG rng;

    ret = wc_InitRng(&rng);
    if (ret != 0) {
        printf("RNG init failed: %d\n", ret);
        return ret;
    }

    MlKemKey *alice = wc_MlKemKey_New(WC_ML_KEM_512, NULL, INVALID_DEVID);
    MlKemKey *bob = wc_MlKemKey_New(WC_ML_KEM_512, NULL, INVALID_DEVID);

    if (!alice || !bob) {
        printf("Key allocation failed\n");
        wc_FreeRng(&rng);
        return -1;
    }

    /* Alice: Generate keypair */
    ret = wc_MlKemKey_MakeKey(alice, &rng);
    if (ret != 0) {
        printf("Alice KeyGen failed: %d\n", ret);
        goto cleanup;
    }
    printf("[Alice] KeyGen OK\n");

    /* Alice: Export public key */
    uint8_t alice_pub[WC_ML_KEM_512_PUBLIC_KEY_SIZE];
    wc_MlKemKey_EncodePublicKey(alice, alice_pub, sizeof(alice_pub));
    printf("[Alice] Public key: %02x%02x%02x%02x... (%d bytes)\n",
           alice_pub[0], alice_pub[1], alice_pub[2], alice_pub[3],
           WC_ML_KEM_512_PUBLIC_KEY_SIZE);

    /* Bob: Load Alice's public key and encapsulate */
    wc_MlKemKey_DecodePublicKey(bob, alice_pub, sizeof(alice_pub));

    uint8_t ct[WC_ML_KEM_512_CIPHER_TEXT_SIZE];
    uint8_t ss_bob[32], ss_alice[32];

    ret = wc_MlKemKey_Encapsulate(bob, ct, ss_bob, &rng);
    if (ret != 0) {
        printf("Bob Encaps failed: %d\n", ret);
        goto cleanup;
    }
    printf("[Bob] Encapsulation OK\n");
    printf("[Bob] Ciphertext: %02x%02x%02x%02x... (%d bytes)\n",
           ct[0], ct[1], ct[2], ct[3], WC_ML_KEM_512_CIPHER_TEXT_SIZE);
    printf("[Bob] Shared secret: %02x%02x%02x%02x...\n",
           ss_bob[0], ss_bob[1], ss_bob[2], ss_bob[3]);

    /* Alice: Decapsulate */
    ret = wc_MlKemKey_Decapsulate(alice, ss_alice, ct, sizeof(ct));
    if (ret != 0) {
        printf("Alice Decaps failed: %d\n", ret);
        goto cleanup;
    }
    printf("[Alice] Decapsulation OK\n");
    printf("[Alice] Shared secret: %02x%02x%02x%02x...\n",
           ss_alice[0], ss_alice[1], ss_alice[2], ss_alice[3]);

    /* Verify */
    if (memcmp(ss_bob, ss_alice, 32) == 0) {
        printf("\n*** ML-KEM SUCCESS - Shared secrets match! ***\n\n");
        ret = 0;
    } else {
        printf("\n*** ML-KEM FAILED - Secrets don't match ***\n\n");
        ret = -1;
    }

cleanup:
    wc_MlKemKey_Free(alice);
    wc_MlKemKey_Free(bob);
    wc_FreeRng(&rng);
    return ret;

#else
    printf("ML-KEM not compiled in wolfSSL.\n");
    printf("Rebuild wolfSSL with: ./configure --enable-kyber --enable-experimental\n\n");
    return 0;
#endif
}

/*============================================================================
 * Main
 *============================================================================*/
int main(int argc, char* argv[])
{
    int demo_only = 0;

    /* Check args */
    if (argc > 1 && strcmp(argv[1], "--demo") == 0) {
        demo_only = 1;
    }

    /* Setup signal handler */
    signal(SIGINT, sig_handler);
    signal(SIGTERM, sig_handler);

    printf("\n");
    printf("========================================\n");
    printf("  PQC-DTLS 1.3 Server (Linux)\n");
    printf("  wolfSSL + ML-KEM-512\n");
    printf("========================================\n\n");

    /* Print wolfSSL version */
    printf("[Info] wolfSSL version: %s\n", wolfSSL_lib_version());

#ifdef WOLFSSL_DTLS13
    printf("[Info] DTLS 1.3 support: YES\n");
#else
    printf("[Info] DTLS 1.3 support: NO (using DTLS 1.2)\n");
#endif

#if defined(HAVE_LIBOQS) || defined(WOLFSSL_HAVE_KYBER)
    printf("[Info] ML-KEM/Kyber support: YES\n");
#else
    printf("[Info] ML-KEM/Kyber support: NO\n");
#endif

    printf("\n");

    /* Run ML-KEM test */
    standalone_mlkem_test();

    if (demo_only) {
        printf("Demo-only mode, exiting.\n");
        return 0;
    }

    /* Run DTLS server */
    return run_dtls_server();
}
