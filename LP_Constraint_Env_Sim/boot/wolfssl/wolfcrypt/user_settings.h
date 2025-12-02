#ifndef USER_SETTINGS_H
#define USER_SETTINGS_H

/* wolfCrypt only - minimal build for ML-KEM demo */
#define WOLFCRYPT_ONLY

/* Time stubs */
#define NO_TIME_H
#define WOLFSSL_NO_CLOCK
#define NO_ASN_TIME

/* Disable networking/TLS features */
#define WOLFSSL_NO_SOCK
#define NO_WRITEV
#define WOLFSSL_USER_IO
#define NO_FILESYSTEM
#define NO_WOLFSSL_DIR
#define NO_WOLFSSL_SERVER
#define SINGLE_THREADED
#define NO_OLD_TLS

/* Memory optimizations - CRITICAL for embedded */
#define WOLFSSL_SMALL_STACK
#define NO_ERROR_STRINGS
#define GCM_SMALL
#define ALT_ECC_SIZE
#define WOLFSSL_MLKEM_ENCAPSULATE_SMALL_MEM
#define WOLFSSL_MLKEM_MAKEKEY_SMALL_MEM

/* Disable unused algorithms to save space */
#define NO_DH
#define NO_RSA
#define NO_DSA
#define NO_RC4
#define NO_MD4
#define NO_MD5
#define NO_SHA
#define NO_PWDBASED
#define NO_PKCS12
#define NO_PKCS7
#define NO_AES
#define NO_DES3
#define NO_RABBIT
#define NO_HC128
#define NO_IDEA
#define NO_CAMELLIA
#define NO_CODING
#define NO_SIG_WRAPPER
#define WC_NO_ASYNC_THREADING

/* Disable ECC/ED25519/X25519 to save space */
#define NO_ECC
#define WOLFCRYPT_CURVE25519_SMALL

/* Required for ML-KEM */
#define WOLFSSL_WC_MLKEM
#define WOLFSSL_HAVE_MLKEM
#define WOLFSSL_HAVE_KYBER
#define WOLFSSL_SHA3
#define WOLFSSL_SHAKE256
#define WOLFSSL_SHAKE128
#define WOLFSSL_SHA256

/* Use smaller math library */
#define WOLFSSL_SP_MATH_ALL
#define WOLFSSL_SP_SMALL
#define SP_WORD_SIZE 32
#define WOLFSSL_SP_NO_MALLOC

/* Custom RNG - use custom seed generation with Hash DRBG */
extern int CustomRngGenerateBlock(unsigned char *, unsigned int);
#define CUSTOM_RAND_GENERATE_SEED CustomRngGenerateBlock
#define HAVE_HASHDRBG

#endif // USER_SETTINGS_H