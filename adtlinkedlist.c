
/*#include <stdlib.h>
#include "adtlinkedlist.h"

Node *createNode(Node *head, float value) {
    Node *newNode = malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

Node *insertAtEnd(Node *head, float value) {
    Node *newNode = malloc(sizeof(Node));
    newNode -> data = value;
    newNode -> next = NULL;
    if(head == NULL) {
        return newNode;
    }
    Node *temp = head;
    while(temp -> next -> next != NULL) {
        temp = temp -> next;
    }
    temp->next = newNode;
    return head;
}
Node *deleteFromEnd(Node *head) {
    if(head -> next == NULL) {
        free(head);
    }
    Node *temp = head;
    if(temp -> next -> next != NULL) {
        temp = head -> next;
    }
    free(temp);
    return head;
}
Node *deleteFromBegin(Node *head) {
    if(head -> next == NULL) {
        free(head);
    }
    Node *temp = head;
    temp ->next = NULL;
    free(temp);
    return head;
}

void freeList(Node *head) {
    Node *temp;
    temp = head;
    while(temp -> next != NULL) {
        free(temp);
        temp = head->next;
    }

}*/
#include <stdio.h>
#include <stdlib.h>
#include "adtlinkedlist.h"

Node *insertAtBeginning(Node *head, float data) {
    Node *newNode = malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = head;
    return newNode;
}

Node *insertAtEnd(Node *head, float data) {
    Node *newNode = malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;

    if (head == NULL)
        return newNode;

    Node *temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
    return head;
}

Node *deleteFromBeginning(Node *head) {
    if (head == NULL)
        return NULL;

    Node *temp = head;
    head = head->next;
    free(temp);
    return head;
}

Node *deleteFromEnd(Node *head) {
    if (head == NULL)
        return NULL;

    if (head->next == NULL) {
        free(head);
        return NULL;
    }

    Node *temp = head;
    while (temp->next->next != NULL)
        temp = temp->next;

    free(temp->next);
    temp->next = NULL;
    return head;
}



void freeList(Node *head) {
    Node *temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}
