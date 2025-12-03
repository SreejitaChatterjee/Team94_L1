#ifndef USER_SETTINGS_H
#define USER_SETTINGS_H

/*============================================================================
 * PQC Demo Configuration for Bare-Metal RISC-V
 * Inter IIT Tech Meet 14.0 - QTrino Labs Challenge
 *
 * wolfCrypt-only build for:
 * - ML-KEM-512 (Kyber) post-quantum key encapsulation
 * - SHA3-256 / SHA-256 hashing
 * - AES-128-GCM authenticated encryption
 *============================================================================*/

/*--- Core Configuration ---*/
#define WOLFCRYPT_ONLY          /* No SSL/TLS, just crypto primitives */

/*--- ML-KEM (Kyber) Post-Quantum Key Encapsulation ---*/
#define WOLFSSL_WC_MLKEM
#define WOLFSSL_HAVE_MLKEM
#define WOLFSSL_MLKEM_ENCAPSULATE_SMALL_MEM  /* Memory optimization */
#define WOLFSSL_MLKEM_MAKEKEY_SMALL_MEM      /* Memory optimization */

/*--- Hash Algorithms ---*/
#define WOLFSSL_SHA3            /* SHA3-256 (required for ML-KEM) */
#define WOLFSSL_SHAKE256        /* SHAKE256 (required for ML-KEM) */
#define WOLFSSL_SHAKE128        /* SHAKE128 (required for ML-KEM) */
#define WOLFSSL_SHA256          /* SHA-256 for key derivation */

/*--- AES-GCM Authenticated Encryption ---*/
#define HAVE_AESGCM
#define GCM_SMALL               /* Memory-optimized GCM */
#define WOLFSSL_AES_SMALL_TABLES
#define WOLFSSL_AES_DIRECT

/*--- Disable Unused Features (save memory) ---*/
#define NO_RSA
#define NO_DH
#define NO_DSA
#define NO_ECC
#define NO_DES3
#define NO_RC4
#define NO_MD4
#define NO_MD5
#define NO_SHA                  /* We use SHA-256 and SHA3 instead */
#define NO_PWDBASED
#define NO_PKCS12
#define NO_PKCS7
#define NO_OLD_TLS
#define NO_RABBIT
#define NO_HC128
#define NO_IDEA
#define NO_CAMELLIA
#define NO_CODING
#define NO_SIG_WRAPPER
#define WC_NO_ASYNC_THREADING

/*--- Time Configuration ---*/
#define NO_TIME_H
#define WOLFSSL_NO_CLOCK
#define NO_ASN_TIME
#define USER_TIME
/* XTIME is defined in main.c */

/*--- Embedded System Configuration ---*/
#define SINGLE_THREADED
#define NO_FILESYSTEM
#define NO_WOLFSSL_DIR
#define WOLFSSL_NO_SOCK
#define NO_WRITEV

/*--- Memory Optimizations ---*/
#define WOLFSSL_SMALL_STACK
#define WOLFSSL_SMALL_STACK_CACHE
#define NO_ERROR_STRINGS        /* Save ~10KB */

/*--- Math Library (optimized for 32-bit RISC-V) ---*/
#define WOLFSSL_SP_MATH_ALL
#define WOLFSSL_SP_SMALL
#define SP_WORD_SIZE 32
#define WOLFSSL_SP_NO_MALLOC

/*--- Custom RNG Seed ---*/
extern int CustomRngGenerateBlock(unsigned char *, unsigned int);
#define CUSTOM_RAND_GENERATE_SEED CustomRngGenerateBlock
#define HAVE_HASHDRBG
#define WC_NO_HASHDRBG_RESEED

/*--- Debug (uncomment for debugging) ---*/
/* #define DEBUG_WOLFSSL */

#endif /* USER_SETTINGS_H */
