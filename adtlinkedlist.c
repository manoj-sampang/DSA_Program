
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

/*Node *insertAtPosition(Node *head, float data, int pos) {
    Node *newNode = malloc(sizeof(Node));
    newNode -> data = data;
    if(head == NULL) {
        printf("Inserted without position since Linked List is Empty\n");
        newNode -> next = head;
        return newNode;
    }
    else {
        Node *temp = head;
        int n = 0;
        while(n != pos) {
            temp = temp -> next;
            n++;
        }
        temp -> next = newNode;
        newNode -> next = temp -> next;
        return temp;
    }
}*/
Node *insertAtPosition(Node *head, float data, int pos) {
    Node *newNode = malloc(sizeof(Node));
    newNode->data = data;

    // Insert at beginning
    if (pos == 0) {
        newNode->next = head;
        return newNode;
    }

    Node *temp = head;
    int i = 0;

    while (temp != NULL && i < pos - 1) {
        temp = temp->next;
        i++;
    }

    if (temp == NULL) {
        printf("Invalid position\n");
        free(newNode);
        return head;
    }

    newNode->next = temp->next;
    temp->next = newNode;

    return head;
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
    temp -> next =  newNode;

    return head;
}

Node *deleteFromBeginning(Node *head) {
    if (head == NULL)
        return NULL;

    Node *temp = head;
    head = head->next;
    printf("%.2f Deleted From Beginning of Linked List\n", temp -> data);
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

    printf("%.2f Deleted From End of Linked List\n", temp -> next -> data);
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
