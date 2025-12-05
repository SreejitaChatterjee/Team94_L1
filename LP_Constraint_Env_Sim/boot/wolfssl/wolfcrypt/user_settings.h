#ifndef USER_SETTINGS_H
#define USER_SETTINGS_H

/*============================================================================
 * PQC-DTLS 1.3 Configuration for Bare-Metal RISC-V
 * Inter IIT Tech Meet 14.0 - QTrino Labs Challenge
 *
 * Full wolfSSL build with DTLS 1.3 and ML-KEM support
 *============================================================================*/

#include <stddef.h>
#include <sys/types.h>

/*--- Math Backend ---*/
#define WOLFSSL_SP_MATH

/*--- No OS/Socket Layer ---*/
#define WOLFSSL_NO_SOCK
#define NO_WRITEV

/*--- Memory Optimizations ---*/
#define WOLFSSL_SMALL_STACK
#define WOLFSSL_SMALL_CERT_VERIFY
#define WOLFSSL_SMALL_SESSION_CACHE

/*--- Disable Unused Features ---*/
#define NO_FILESYSTEM
#define SINGLE_THREADED
#define NO_ERROR_STRINGS

/*--- Time Configuration ---*/
#define NO_TIME_H
#define USER_TIME
/* XTIME() defined in main.c */

/*--- TLS/DTLS Protocol Support ---*/
#define WOLFSSL_TLS13
#define WOLFSSL_DTLS
#define WOLFSSL_DTLS13
#define HAVE_TLS_EXTENSIONS
#define WOLFSSL_DTLS_CH_FRAG
#define WOLFSSL_DTLS13_NO_HRR_ON_RESUME
#define WOLFSSL_SEND_HRR_COOKIE

/*--- Elliptic Curve Cryptography ---*/
#define HAVE_ECC
#define ECC_TIMING_RESISTANT
#define HAVE_CURVE25519
#define HAVE_X25519
#define HAVE_ED25519
#define ECC256

/*--- RSA ---*/
#define WC_RSA_BLINDING
#define WC_RSA_PSS

/*--- Hash Algorithms ---*/
#define WOLFSSL_SHA256
#define WOLFSSL_SHA512

/*--- AES-GCM Symmetric Encryption ---*/
#define HAVE_AESGCM
#define WOLFSSL_AES_DIRECT

/*--- Key Derivation ---*/
#define HAVE_HKDF

/*--- Key Generation ---*/
#define WOLFSSL_KEY_GEN

/*--- ML-KEM (Kyber) Post-Quantum Support ---*/
#define WOLFSSL_HAVE_MLKEM
#define WOLFSSL_WC_MLKEM
#define WOLFSSL_MLKEM_ENCAPSULATE_SMALL_MEM
#define WOLFSSL_MLKEM_MAKEKEY_SMALL_MEM

/*--- SHA3/SHAKE (required for ML-KEM) ---*/
#define WOLFSSL_SHA3
#define WOLFSSL_SHAKE128
#define WOLFSSL_SHAKE256

/*--- SP Math Optimizations ---*/
#define WOLFSSL_SP
#define WOLFSSL_SP_SMALL
#define WOLFSSL_HAVE_SP_RSA
#define WOLFSSL_HAVE_SP_ECC

/*--- Custom RNG ---*/
extern int CustomRngGenerateBlock(unsigned char *, unsigned int);
#define CUSTOM_RAND_GENERATE_SEED CustomRngGenerateBlock
#define HAVE_HASHDRBG

/*--- Debug (comment out for production) ---*/
#define DEBUG_WOLFSSL
#define SHOW_GEN
#define DEBUG_WOLFSSL_VERBOSE

#endif /* USER_SETTINGS_H */
