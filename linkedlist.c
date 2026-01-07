#include <stdio.h>

#include "adtlinkedlist.h"

void input(Node *node) {
    float data;
    printf("Enter data inside node = ");
    scanf("%f", &data);
    node = createNode(data);
}
void display(Node *node) {
    do {
    printf("%f -> ", node -> data)
    node = node -> next;
    }while(node != NULL);

}

int main () {
    int choice, n;
    float data;
    printf("Enter total no. of memory to work with or(limit of the nodes) = ");
    scanf("%d", &n)
    Node *node[n];
    printf("1. \nCreate nodes\n
        2. Delete nodes\n
        3. Input\n
        4. Display\n
        5. Exit\nChoose = ");
        scanf("%d", &choice)
    switch(choice) {
        case 1: 
            printf("Creating Nodes...\n");
            printf("Enter initial data inside node = ");
            scanf("%f", &data);
            node = createNode(data);
            break;
        case 2:
            printf("Deleting Nodes...\n");
            

            break;
        case 3:
            inputList(node);
            break;
        case 4:
            display(node);
            break;
        case 5:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid Choice Please try again!!!\n");
            
    }
    return 0;
}