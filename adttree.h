#ifndef ADTTREE_H
#define ADTTREE_H
#define MAX 10;
typedef struct Node{
    char ch[MAX];
    struct Node* left;
    struct Node* right;
}Node;

void createNode(Node*, char);
Node insertData(Node*, char);


#endif