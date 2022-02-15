#ifndef _ASN1C_DECODE_H_
#define _ASN1C_DECODE_H_


#ifdef __cplusplus
extern "C" {
#endif
#include <stdlib.h>
#include "common.h"
#include <sys/types.h>
#include "MessageFrame.h"


int uper_decode_demo(char *buf, size_t len);


#pragma pack()

#ifdef __cplusplus
}
#endif

#endif