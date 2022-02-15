#include <stdlib.h>
#include <sys/types.h>
#include "MessageFrame.h"

#include "msg_node.h"
#include "msg_map.h"

void fille_message_frame_map(MessageFrame_t *msg)
{
    msg->present = MessageFrame_PR_mapFrame;

    msg->choice.mapFrame.msgCnt = 4;

    Node_t *a_node = NULL;
    a_node = calloc(1, sizeof(Node_t));
    fille_message_Node_t(a_node);
    msg->choice.mapFrame.nodes.list.array = &a_node;
    msg->choice.mapFrame.nodes.list.count = 1;
    msg->choice.mapFrame.nodes.list.size = sizeof(Node_t);
}

/**
 * @brief Output map data in xml format to standard output
 * 
 * @return int 
 */
int msg_map_xer_fprint()
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
    fille_message_frame_map(messageframe);

    /* Also print the constructed Rectangle XER encoded (XML) */

    xer_fprint(stdout, &asn_DEF_MessageFrame, messageframe);
}