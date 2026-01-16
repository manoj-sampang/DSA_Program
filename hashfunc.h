#ifndef MYHASHFUNC_H
#define MYHASHFUNC_H

#include <stdbool.h>

#define MAX 50
#define TABLE_SIZE 10

typedef struct Node {
    char name[MAX];
    struct Node* next;
} Node;

typedef struct Linkedlist {
    Node* head;
} Linkedlist;

int calHashFunc(char[]);
Node* createNode(char[]);
bool checkCollision(Linkedlist*);
void insertName(Linkedlist[], char[]);
void freeList(Linkedlist[]);

#endif
