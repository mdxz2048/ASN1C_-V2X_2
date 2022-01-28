#include <stdlib.h>
#include <sys/types.h>
#include "MessageFrame.h"

#define ASN_PRINTF_FILENAME "asn_print.txt"

/* Write the encoded output into some FILE stream. */
static int write_out(const void *buffer, size_t size, void *app_key)
{
    FILE *out_fp = app_key;
    size_t wrote = fwrite(buffer, 1, size, out_fp);
    return (wrote == size) ? 0 : -1;
}

int main(int ac, char **av)
{
    MessageFrame_t *messageframe; /* Type to encode */
    asn_enc_rval_t ec;            /* Encoder return value */
    /* Allocate the MessageFrame_t */
    messageframe = calloc(1, sizeof(MessageFrame_t)); /* not malloc! */
    if (!messageframe)
    {
        perror("calloc() failed ");
        exit(1);
    }
    /* Initialize the messageframe members */

    messageframe->present = MessageFrame_PR_msgFrameExt;
    messageframe->choice.msgFrameExt.messageId = 12; // ssm
    messageframe->choice.msgFrameExt.value.present = value_PR_SensorSharingMsg;
    messageframe->choice.msgFrameExt.value.choice.SensorSharingMsg.msgCnt = 120;
    char id[8] = "msg_buf";
    messageframe->choice.msgFrameExt.value.choice.SensorSharingMsg.id.buf = id;
    messageframe->choice.msgFrameExt.value.choice.SensorSharingMsg.id.size = 8;
    messageframe->choice.msgFrameExt.value.choice.SensorSharingMsg.equipmentType = EquipmentType_obu;
    messageframe->choice.msgFrameExt.value.choice.SensorSharingMsg.secMark = 12345;
    messageframe->choice.msgFrameExt.value.choice.SensorSharingMsg.sensorPos.lat = 11600000;
    messageframe->choice.msgFrameExt.value.choice.SensorSharingMsg.sensorPos.Long = 2900000;
    messageframe->choice.msgFrameExt.value.choice.SensorSharingMsg.msgCnt = 120;
    messageframe->choice.msgFrameExt.value.choice.SensorSharingMsg.msgCnt = 120;

    /* BER encode the data if filename is given */
    if (ac < 2)
    {
        fprintf(stderr, " specify filename for BER output\n");
    }
    else
    {
        const char *filename = av[1];
        FILE *fp = fopen(filename, "wb"); /* for BER output */
        if (!fp)
        {
            perror(filename);
            exit(1);
        }
        /* Encode the Rectangle type as BER (DER) */
        ec = der_encode(&asn_DEF_MessageFrame, messageframe, write_out, fp);
        fclose(fp);
        if (ec.encoded == -1)
        {
            fprintf(stderr, "”Could not encode Rectangle (at %s)\n”",
                    ec.failed_type ? ec.failed_type->name : "unknown");
            exit(1);
        }
        else
        {
            fprintf(stderr, "”Created %s with BER encoded Rectangle\n”", filename);
        }
    }
    /* Also print the constructed Rectangle XER encoded (XML) */
    xer_fprint(stdout, &asn_DEF_MessageFrame, messageframe);
    /*Print the target language's structure in human readable form.(ASN)*/
    FILE *stream = fopen(ASN_PRINTF_FILENAME, "w+");
    asn_fprint(stream, &asn_DEF_MessageFrame, messageframe);
    fclose(stream);
    
    return 0; /* Encoding finished successfully */
}