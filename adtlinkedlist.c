
#include <stdlib.h>
#include "adtlinkedlist.h"

Node *createNode(float value) {
    Node *node = malloc(sizeof(Node));
    node->data = value;
    node->next = NULL;
    return node;
}
