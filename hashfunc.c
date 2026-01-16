#include "hashfunc.h"
#include <stdlib.h>
#include <string.h>

int calHashFunc(char name[]) {
    int sum = 0;
    for (int i = 0; name[i] != '\0'; i++)
        sum += name[i];
    return sum % TABLE_SIZE;
}

Node* createNode(char name[]) {
    Node* newNode = malloc(sizeof(Node));
    strcpy(newNode->name, name);
    newNode->next = NULL;
    return newNode;
}

bool checkCollision(Linkedlist* list) {
    return list->head != NULL;
}

void insertName(Linkedlist table[], char name[]) {
    int index = calHashFunc(name);
    Node* newNode = createNode(name);

    if (!checkCollision(&table[index])) {
        table[index].head = newNode;
    } else {
        Node* temp = table[index].head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = newNode;
    }
}

void freeList(Linkedlist table[]) {
    for (int i = 0; i < TABLE_SIZE; i++) {
        Node* temp;
        while (table[i].head != NULL) {
            temp = table[i].head;
            table[i].head = temp->next;
            free(temp);
        }
    }
}
