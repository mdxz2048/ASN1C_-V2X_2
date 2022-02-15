#include "asn1c_decode.h"

/* Write the encoded output into some FILE stream. */
static int write_out(const void *buffer, size_t size, void *app_key)
{
    FILE *out_fp = app_key;
    size_t wrote = fwrite(buffer, 1, size, out_fp);
    return (wrote == size) ? 0 : -1;
}

int uper_decode_demo(char *buf, size_t len)
{
    asn_dec_rval_t rval;          /* Encoder return value */
    MessageFrame_t *messageframe; /* Type to encode */
    /* Allocate the MessageFrame_t */
    messageframe = calloc(1, sizeof(MessageFrame_t)); /* not malloc! */
    if (!messageframe)
    {
        perror("calloc() failed ");
        exit(1);
    }

    // ATS_UNALIGNED_BASIC_PER：使用UPER编码
    // msg_frame：接收decode之后的数据
    // buf：接收到的decode之前的数据
    rval = asn_decode(0, ATS_UNALIGNED_BASIC_PER, &asn_DEF_MessageFrame, (void **)(&messageframe), (char *)buf, len);
    if (rval.code == RC_OK)
    {

        // success
        /* Also print the constructed Rectangle XER encoded (XML) */
        xer_fprint(stdout, &asn_DEF_MessageFrame, messageframe);
        ASN_STRUCT_FREE(asn_DEF_MessageFrame, messageframe);
    }
    else
    {
        debug_printf("asn_decode() failed.");
        // error
    }
}
