#include <stdlib.h>
#include <sys/types.h>
#include "MessageFrame.h"
#include "msg_node.h"


void fille_message_Node_t(Node_t *node)
{
    node->id.id = 2048;
    node->refPos.lat = 2048;
    node->refPos.Long = 2048;

}