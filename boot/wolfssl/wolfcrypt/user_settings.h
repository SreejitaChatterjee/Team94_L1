#ifndef USER_SETTINGS_H
#define USER_SETTINGS_H

/* ============ Include system types (provides ssize_t) ============ */
#include <stddef.h>
#include <sys/types.h>  /* picolibc provides ssize_t here */

/* ============ Math Backend ============ */
#define WOLFSSL_SP_MATH

#define NO_TIME_H
#define WOLFSSL_NO_CLOCK
#define NO_ASN_TIME

/* Network/IO Configuration */
#define WOLFSSL_NO_SOCK
#define NO_WRITEV
#define WOLFSSL_USER_IO

/* Memory Optimizations - use #ifndef to avoid redefinition */
#ifndef WOLFSSL_SMALL_STACK
#define WOLFSSL_SMALL_STACK
#endif
#define WOLFSSL_SMALL_CERT_VERIFY
#define NO_FILESYSTEM
#define NO_WOLFSSL_DIR
#define SINGLE_THREADED
#define NO_ERROR_STRINGS
#define WOLFSSL_SMALL_SESSION_CACHE

/* TLS/DTLS Configuration */
#define WOLFSSL_TLS13
#define HAVE_TLS_EXTENSIONS

/* DTLS Support */
#define WOLFSSL_DTLS
#define WOLFSSL_DTLS13
#define WOLFSSL_EXPERIMENTAL_SETTINGS
#define WOLFSSL_DTLS_CH_FRAG
#define WOLFSSL_SEND_HRR_COOKIE

/* Crypto Algorithms */
#define WC_RSA_PSS
#define NO_DH

#define HAVE_X25519
#define HAVE_CURVE25519
#define WOLFSSL_SHA256
#define WOLFSSL_SHA512
#define HAVE_ECC
#define HAVE_ED25519
#define HAVE_RSA
#define HAVE_AESGCM
#define WC_RSA_BLINDING
#define ECC_TIMING_RESISTANT

/* ML-KEM / Post-Quantum */
#define WOLFSSL_WC_MLKEM
#define WOLFSSL_HAVE_MLKEM
#define WOLFSSL_HAVE_KYBER
#define WOLFSSL_SHA3
#define WOLFSSL_SHAKE256
#define WOLFSSL_SHAKE128
#define WOLFSSL_MLKEM_ENCAPSULATE_SMALL_MEM
#define WOLFSSL_MLKEM_MAKEKEY_SMALL_MEM

/* Additional Features */
#define HAVE_HKDF
#define WOLFSSL_KEY_GEN
#define WOLFSSL_HAVE_SP_RSA
#define WOLFSSL_HAVE_SP_ECC
#define HAVE_ECC256

/* Debug (comment out for production) */
#define DEBUG_WOLFSSL
#define SHOW_GEN
#define DEBUG_WOLFSSL_VERBOSE

/* Custom RNG */
extern int CustomRngGenerateBlock(unsigned char *, unsigned int);
#define CUSTOM_RAND_GENERATE_SEED CustomRngGenerateBlock



#define HAVE_SUPPORTED_CURVES


#endif /* USER_SETTINGS_H */