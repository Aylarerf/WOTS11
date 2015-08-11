/*
xmss_commons.h version 20150811
Andreas Hülsing
Public domain.
*/
#ifndef XMSS_COMMONS_H
#define XMSS_COMMONS_H

#include <stdlib.h>

void to_byte(unsigned char *output, uint in, int bytes);
void hexdump(const unsigned char *a, size_t len);
#endif