/**
 * PQC ML-KEM Demo for Bare-Metal RISC-V
 * Inter IIT Tech Meet 14.0 - QTrino Labs Challenge
 *
 * This firmware demonstrates ML-KEM (Kyber) post-quantum
 * key encapsulation on a LiteX RISC-V SoC.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <irq.h>
#include <libbase/uart.h>
#include <libbase/console.h>
#include <generated/csr.h>

/* wolfSSL/wolfCrypt headers */
#include <wolfssl/wolfcrypt/user_settings.h>
#include <wolfssl/options.h>
#include <wolfssl/wolfcrypt/wc_mlkem.h>
#include <wolfssl/wolfcrypt/random.h>

#ifdef min
#undef min
#endif
#ifdef max
#undef max
#endif

/*============================================================================
 * Platform Stubs
 *============================================================================*/

/* Custom RNG - Replace with TRNG in production */
int CustomRngGenerateBlock(unsigned char *output, unsigned int sz) {
    static unsigned int seed = 0x12345678;
    for (unsigned int i = 0; i < sz; i++) {
        seed = seed * 1103515245 + 12345;
        output[i] = (unsigned char)(seed >> 16);
    }
    return 0;
}

/* Time stub */
#include <sys/time.h>
int gettimeofday(struct timeval* tv, void* tz) {
    if (tv) {
        tv->tv_sec = 0;
        tv->tv_usec = 0;
    }
    return 0;
}

/*============================================================================
 * ML-KEM (Kyber) Key Encapsulation Demo
 *============================================================================*/

static WC_RNG global_rng;

int mlkem_keygen_demo(void) {
    int ret;

    printf("\n=== ML-KEM-512 Key Generation ===\n");

    /* Generate ML-KEM-512 key pair */
    MlKemKey* key = wc_MlKemKey_New(WC_ML_KEM_512, NULL, INVALID_DEVID);
    if (key == NULL) {
        printf("Key allocation failed\n");
        return -1;
    }

    ret = wc_MlKemKey_MakeKey(key, &global_rng);
    if (ret != 0) {
        printf("Key generation failed: %d\n", ret);
        wc_MlKemKey_Free(key);
        return -1;
    }

    printf("ML-KEM-512 key pair generated!\n");

    /* Export keys */
    unsigned char pubK[WC_ML_KEM_512_PUBLIC_KEY_SIZE];
    unsigned char privK[WC_ML_KEM_512_PRIVATE_KEY_SIZE];

    ret = wc_MlKemKey_EncodePublicKey(key, pubK, WC_ML_KEM_512_PUBLIC_KEY_SIZE);
    if (ret == 0) {
        printf("Public key (%d bytes): ", WC_ML_KEM_512_PUBLIC_KEY_SIZE);
        for (int i = 0; i < 32; i++) printf("%02x", pubK[i]);
        printf("...\n");
    }

    ret = wc_MlKemKey_EncodePrivateKey(key, privK, WC_ML_KEM_512_PRIVATE_KEY_SIZE);
    if (ret == 0) {
        printf("Private key (%d bytes): ", WC_ML_KEM_512_PRIVATE_KEY_SIZE);
        for (int i = 0; i < 32; i++) printf("%02x", privK[i]);
        printf("...\n");
    }

    wc_MlKemKey_Free(key);
    return 0;
}

int mlkem_encapsulate_demo(void) {
    int ret;

    printf("\n=== ML-KEM-512 Encapsulation Test ===\n");

    /* Create two key pairs (Alice and Bob) */
    MlKemKey* alice_key = wc_MlKemKey_New(WC_ML_KEM_512, NULL, INVALID_DEVID);
    MlKemKey* bob_key = wc_MlKemKey_New(WC_ML_KEM_512, NULL, INVALID_DEVID);

    if (!alice_key || !bob_key) {
        printf("Key allocation failed\n");
        return -1;
    }

    /* Alice generates her key pair */
    printf("Alice generating key pair...\n");
    ret = wc_MlKemKey_MakeKey(alice_key, &global_rng);
    if (ret != 0) {
        printf("Alice key gen failed: %d\n", ret);
        goto cleanup;
    }

    /* Export Alice's public key */
    unsigned char alice_pub[WC_ML_KEM_512_PUBLIC_KEY_SIZE];
    ret = wc_MlKemKey_EncodePublicKey(alice_key, alice_pub, sizeof(alice_pub));
    if (ret != 0) {
        printf("Alice pub export failed: %d\n", ret);
        goto cleanup;
    }

    /* Bob encapsulates a shared secret using Alice's public key */
    printf("Bob encapsulating shared secret...\n");
    ret = wc_MlKemKey_DecodePublicKey(bob_key, alice_pub, sizeof(alice_pub));
    if (ret != 0) {
        printf("Bob import pub failed: %d\n", ret);
        goto cleanup;
    }

    unsigned char ciphertext[WC_ML_KEM_512_CIPHER_TEXT_SIZE];
    unsigned char bob_shared[WC_ML_KEM_SS_SZ];

    ret = wc_MlKemKey_Encapsulate(bob_key, ciphertext, bob_shared, &global_rng);
    if (ret != 0) {
        printf("Encapsulation failed: %d\n", ret);
        goto cleanup;
    }

    printf("Ciphertext (%d bytes): ", WC_ML_KEM_512_CIPHER_TEXT_SIZE);
    for (int i = 0; i < 32; i++) printf("%02x", ciphertext[i]);
    printf("...\n");

    /* Alice decapsulates to get the shared secret */
    printf("Alice decapsulating...\n");
    unsigned char alice_shared[WC_ML_KEM_SS_SZ];

    ret = wc_MlKemKey_Decapsulate(alice_key, alice_shared,
                                   ciphertext, WC_ML_KEM_512_CIPHER_TEXT_SIZE);
    if (ret != 0) {
        printf("Decapsulation failed: %d\n", ret);
        goto cleanup;
    }

    /* Verify both have same shared secret */
    printf("\nBob's shared secret:   ");
    for (int i = 0; i < WC_ML_KEM_SS_SZ; i++) printf("%02x", bob_shared[i]);
    printf("\n");

    printf("Alice's shared secret: ");
    for (int i = 0; i < WC_ML_KEM_SS_SZ; i++) printf("%02x", alice_shared[i]);
    printf("\n");

    if (memcmp(bob_shared, alice_shared, WC_ML_KEM_SS_SZ) == 0) {
        printf("\n*** SUCCESS: Shared secrets match! ***\n");
    } else {
        printf("\n*** ERROR: Shared secrets don't match! ***\n");
        ret = -1;
    }

cleanup:
    wc_MlKemKey_Free(alice_key);
    wc_MlKemKey_Free(bob_key);
    return ret;
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

    printf("\n");
    printf("================================================\n");
    printf("  PQC Demo for RISC-V IoT Device\n");
    printf("  Inter IIT Tech Meet 14.0 - QTrino Labs\n");
    printf("  ML-KEM (Kyber) Post-Quantum Cryptography\n");
    printf("================================================\n");
    printf("\n");

    /* Initialize RNG */
    int ret = wc_InitRng(&global_rng);
    if (ret != 0) {
        printf("RNG init failed: %d\n", ret);
        return -1;
    }

    /* Generate random bytes test */
    printf("=== Random Number Generation ===\n");
    uint8_t buffer[32];
    ret = wc_RNG_GenerateBlock(&global_rng, buffer, 32);
    if (ret == 0) {
        printf("Random (32 bytes): ");
        for (int i = 0; i < 32; i++) printf("%02X", buffer[i]);
        printf("\n");
    }

    /* ML-KEM Key Generation Demo */
    mlkem_keygen_demo();

    /* ML-KEM Encapsulation Demo */
    mlkem_encapsulate_demo();

    /* Cleanup */
    wc_FreeRng(&global_rng);

    printf("\n================================================\n");
    printf("  PQC Demo Complete!\n");
    printf("================================================\n");

    printf("\nFirmware execution complete.\n");

    while(1) {
        /* Idle loop */
    }

    return 0;
}
