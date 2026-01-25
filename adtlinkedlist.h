#ifndef ADTLINKEDLIST_H
#define ADTLINKEDLIST_H

typedef struct Node {
    float data;
    struct Node *next;
} Node;

Node *insertAtBeginning(Node *head, float data);
Node *insertAtPosition(Node *head, float data, int pos);
Node *insertAtEnd(Node *head, float data);
Node *deleteFromBeginning(Node *head);
Node *deleteFromEnd(Node *head);
Node *deleteFromMiddle(Node* head, int pos);
void freeList(Node *head);

#endif

