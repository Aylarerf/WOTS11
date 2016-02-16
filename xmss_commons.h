/*
xmss_commons.h 20160210
Andreas Hülsing
Joost Rijneveld
Public domain.
*/
#ifndef XMSS_COMMONS_H
#define XMSS_COMMONS_H

#include <stdlib.h>

void to_byte(unsigned char *output, unsigned int in, int bytes);
void hexdump(const unsigned char *a, size_t len);
#endif