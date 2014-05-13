#ifndef crypto_sign_ed25519_H
#define crypto_sign_ed25519_H

#include <stddef.h>
#include "export.h"

#define crypto_sign_ed25519_SECRETKEYBYTES (32U + 32U)
#define crypto_sign_ed25519_PUBLICKEYBYTES 32U
#define crypto_sign_ed25519_SEEDBYTES 32U
#define crypto_sign_ed25519_BYTES 64U

#ifdef __cplusplus
# if __GNUC__
#  pragma GCC diagnostic ignored "-Wlong-long"
# endif
extern "C" {
#endif

SODIUM_EXPORT
size_t crypto_sign_ed25519_bytes(void);

SODIUM_EXPORT
size_t crypto_sign_ed25519_seedbytes(void);

SODIUM_EXPORT
size_t crypto_sign_ed25519_publickeybytes(void);

SODIUM_EXPORT
size_t crypto_sign_ed25519_secretkeybytes(void);

SODIUM_EXPORT
const char * crypto_sign_ed25519_primitive(void);

SODIUM_EXPORT
int crypto_sign_ed25519(unsigned char *sm, unsigned long long *smlen,
                        const unsigned char *m, unsigned long long mlen,
                        const unsigned char *sk);

SODIUM_EXPORT
int crypto_sign_ed25519_open(unsigned char *m, unsigned long long *mlen,
                             const unsigned char *sm, unsigned long long smlen,
                             const unsigned char *pk);

SODIUM_EXPORT
int crypto_sign_ed25519_keypair(unsigned char *pk, unsigned char *sk);

SODIUM_EXPORT
int crypto_sign_ed25519_seed_keypair(unsigned char *pk, unsigned char *sk,
                                     const unsigned char *seed);

#ifdef __cplusplus
}
#endif

#define crypto_sign_ed25519_ref10 crypto_sign_ed25519
#define crypto_sign_ed25519_ref10_open crypto_sign_ed25519_open
#define crypto_sign_ed25519_ref10_keypair crypto_sign_ed25519_keypair
#define crypto_sign_ed25519_ref10_seed_keypair crypto_sign_ed25519_seed_keypair

#endif
