#include "adttree.h"
#include <stdlib.h>

void createNode(Node* head, char name[]) {
    Node* newNode = malloc(sizeof(Node));
    for(int i = 0; name[i] != '\0'; ++i) {
        newNode -> ch[i] = name[i];
    }
    newNode -> left = NULL;
    newNode -> right = NULL;
    if(head == NULL) {
        return newNode;
    }
    Node *temp = head;
    
    while(temp -> right != NULL || temp -> left != NULL) {
        temp = temp -> right;

    }


}
Node insertData(Node* head, char name[]) {
    
}