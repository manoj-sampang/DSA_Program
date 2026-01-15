#ifndef MYHASHFUNC_H
#define MYHASHFUNC_H


typedef struct Node {
    char *data;
    struct Node* next;
}Node;

typedef struct Linkedlist {
    Node* head;
    
}Linkedlist;



int ord(char);

int calHashFunc(char name[]);
 

#endif