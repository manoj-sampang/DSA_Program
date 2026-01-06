#include <stdio.h>

#include "adtlinkedlist.h"

void inputList(Node *node) {
    float data;
    printf("--- Input Data inside Linked List ---\n");
    for(int i = 0; i < n; ++i) {
        printf("Data = ");
        scanf("%f", &data);
        node->data = data;
    }
    nodenext = data;
}
void display(Node *node) {
    int i;
    printf("Displaying Data Inside Linked List\n");
    while(node->next != NULL) {
        i = 1;
        printf("Data[%d] = %f \n", i, node -> data);
        node->next = data;
        ++i;
    }
}
int main () {
    Node *node;
    int choice, n;
    printf("1. Create nodes\n
            2. Delete nodes\n
            3. Input\n
            4. Display\n
            5. Exit\nChoose = ");
    scanf("%d", &choice)
    switch(choice) {
        case 1: 
            printf("Creating Nodes...\n");
            printf("How many nodes to create = ");
            scanf("%d", &n);
            node = createNode(node, n);
            break;
        case 2:
            printf("Deleting Nodes...\n");
            printf("How many nodes to delete = ");
            scanf("%d", &n);

            break;
        case 3:
            inputList(node);
            break;
        case 4:

    }
    return 0;
}