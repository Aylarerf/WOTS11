
#include <stdint.h>
#define XMSS_SHA2 0
#define XMSS_SHAKE128 1
#define XMSS_SHAKE256 2

typedef struct {
   
    unsigned int n;
    unsigned int padding_len;
    unsigned int wots_w;
    unsigned int wots_log_w;
    unsigned int wots_len1;
    unsigned int wots_len2;
    unsigned int wots_len;
    unsigned int wots_sig_bytes;
    unsigned int func;
    
} wots_params;




    
int wots_initialize_params(wots_params *params);


