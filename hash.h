/*
hash.h version 20160722
Andreas Hülsing
Joost Rijneveld
Public domain.
*/

#ifndef HASH_H
#define HASH_H

#define XMSS_SHA2 0x01
#define XMSS_SHAKE 0x02

#define IS_LITTLE_ENDIAN 1

unsigned char* addr_to_byte(unsigned char *bytes, const uint32_t addr[8]);
int prf(unsigned char *out, const unsigned char *in, const unsigned char *key, unsigned int keylen, const unsigned char hash_alg);
int h_msg(unsigned char *out,const unsigned char *in,unsigned long long inlen, const unsigned char *key, const unsigned int keylen, const unsigned int n, const unsigned char hash_alg);
int hash_h(unsigned char *out, const unsigned char *in, const unsigned char *pub_seed, uint32_t addr[8], const unsigned int n, const unsigned char hash_alg);
int hash_f(unsigned char *out, const unsigned char *in, const unsigned char *pub_seed, uint32_t addr[8], const unsigned int n, const unsigned char hash_alg);

#endif
