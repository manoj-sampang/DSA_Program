#ifndef ADTLIST_H
#define ADTLIST_H
typedef struct Node{
    float data;
    struct Node *next;
}Node;

Node *createNode(float);

#endif
