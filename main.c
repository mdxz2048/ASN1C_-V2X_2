#include <stdlib.h>
#include <sys/types.h>
#include "common.h"
#include "asn1c_encode.h"
#include "asn1c_decode.h"
#include "msg_map.h"



int main(int argc, char **argv)
{

    char uper_bsm[] = "2054142434445464700b5a4ed406b49d640144227e200022626466686a6c6e00000b1fffffe3fc487ff8002c272f7d47d5858006812002210237e200022626466686a6c6e00000b1fffffe3fc487ff8002c272f7d47d5858006812002210237e200022626466686a6c6e00000b1fffffe3fc487ff8002c272f7d47d5858006812002210230";
    // uper_decode_demo(uper_bsm, sizeof(uper_bsm));

    msg_map_xer_fprint();
    return  V2X_SUCCESS;
}