/* user_settings.h
 *
 * wolfSSL configuration for PQC-DTLS Server
 * This must be compatible with the embedded client's configuration
 */

#ifndef WOLFSSL_USER_SETTINGS_H
#define WOLFSSL_USER_SETTINGS_H

#ifdef __cplusplus
extern "C" {
#endif

/*============================================================================
 * Platform Settings
 *============================================================================*/

/* We're on Linux - use standard features */
#define HAVE_PTHREAD
#define HAVE_THREAD_LS
#define _GNU_SOURCE

/*============================================================================
 * Post-Quantum Cryptography - ML-KEM (Kyber)
 *============================================================================*/

/* Enable ML-KEM (FIPS 203) */
#define WOLFSSL_HAVE_MLKEM
#define WOLFSSL_WC_MLKEM

/* ML-KEM parameter sets */
#define WOLFSSL_MLKEM_512
#define WOLFSSL_MLKEM_768  
#define WOLFSSL_MLKEM_1024

/* Legacy Kyber names (for compatibility) */
#define WOLFSSL_HAVE_KYBER
#define WOLFSSL_KYBER512
#define WOLFSSL_KYBER768
#define WOLFSSL_KYBER1024

/* Experimental features required for PQC */
#define WOLFSSL_EXPERIMENTAL_SETTINGS

/*============================================================================
 * Hash Functions
 *============================================================================*/

/* SHA-2 family */
#define WOLFSSL_SHA256
#define WOLFSSL_SHA384
#define WOLFSSL_SHA512

/* SHA-3 family - REQUIRED FOR ML-KEM */
#define WOLFSSL_SHA3
#define WOLFSSL_SHAKE128
#define WOLFSSL_SHAKE256

/* Use small SHA3 implementation */
#define WOLFSSL_SHA3_SMALL

/*============================================================================
 * Symmetric Encryption
 *============================================================================*/

/* AES */
#define HAVE_AES
#define HAVE_AESGCM
#define HAVE_AES_DECRYPT
#define WOLFSSL_AES_DIRECT
#define GCM_TABLE_4BIT

/* AES key sizes */
#define WOLFSSL_AES_128
#define WOLFSSL_AES_192
#define WOLFSSL_AES_256

/*============================================================================
 * Random Number Generation
 *============================================================================*/

#define HAVE_HASHDRBG
#define WC_RNG_SEED_CB

/* Linux RNG source */
#define HAVE_LINUX_DEV_URANDOM

/*============================================================================
 * Math Library Configuration
 *============================================================================*/

/* Use single-precision math for performance */
#define WOLFSSL_SP
#define WOLFSSL_SP_MATH_ALL
#define WOLFSSL_HAVE_SP_RSA
#define WOLFSSL_HAVE_SP_DH
#define WOLFSSL_HAVE_SP_ECC

/* 64-bit word size for x86_64 */
#ifdef __x86_64__
    #define SP_WORD_SIZE 64
    #define WOLFSSL_X86_64_BUILD
#else
    #define SP_WORD_SIZE 32
#endif

/*============================================================================
 * Features to Disable (reduce size/complexity)
 *============================================================================*/

/* Disable unused algorithms */
#define NO_DSA
#define NO_RC4
#define NO_MD4
#define NO_MD5
#define NO_DES3
#define NO_RABBIT
#define NO_HC128
#define NO_PSK

/* We don't need full TLS for this demo */
#define WOLFCRYPT_ONLY

/* Disable filesystem if not needed */
/* #define NO_FILESYSTEM */

/*============================================================================
 * Debugging (uncomment for development)
 *============================================================================*/

/* #define DEBUG_WOLFSSL */
/* #define WOLFSSL_DEBUG_MEMORY */

#ifdef __cplusplus
}
#endif

#endif /* WOLFSSL_USER_SETTINGS_H */