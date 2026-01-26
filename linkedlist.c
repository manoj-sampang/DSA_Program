/*#include <stdio.h>
#include <stdlib.h>

#include "adtlinkedlist.h"

void display(Node *node) {
    Node *temp = node;
    printf("Data: ");
        while(temp -> next -> next != NULL) {
            printf("%.2f -> ", temp -> data);
            temp = node -> next;
        }
        temp = node -> next;
        printf("%.2f\n", temp -> data);
        

}

int main () {
    int choice;
    float data;
    Node *head;
    while (1) {
        printf("1. \nCreate nodes\n
        2. Delete nodes\n
        3. Insert Node At End\n
        4. Display\n
        5. Exit\nChoose = ");
        scanf("%d", &choice)
    switch(choice) {
        case 1: 
            printf("Creating Nodes...\n");
            printf("Enter initial data inside node = ");
            scanf("%f", &data);
            head = createNode(head, data);
            break;
        case 2:
            printf("Deleting Nodes...\n");
            printf("1. Delete from End \n 2. Delete
                from Begininning\n");
                scanf("%d", &choice)
                if(choice == 1) {
                    printf("Deleting from End..\n");
                    head = deletefromEnd(head);
                
                }
                if(choice == 2) {
                printf("Deleting from Begininning\n");
                head = deleteFromBegin(head);
                 
                }
                else {
                    printf("INVAID CHOICE. Try again\n");
                    break;
                }

            printf("Deleting Completed\n");
            break;
        case 3:
            printf("Inserting new node at the end\n");
            head = insertAtEnd(head);
            break;
        case 4:
            display(head);
            break;
        case 5:
            printf("Exiting...\n");
            freeList(head);
            printf("Freeing memory\n");
            exit(0);
            break;
        default:
            printf("Invalid Choice Please try again!!!\n");
          
        }
    }
    return 0;
}
*/
#include <stdio.h>
#include <stdlib.h>
#include "adtlinkedlist.h"
void display(Node *head) {
    if(head == NULL)  {
        printf("Nothing to Display\n");
        return;
    }   
    
    printf("Data: ");
    Node *temp = head;
    while (temp -> next != NULL) {
        printf("%.2f -> ", temp -> data);
        temp = temp -> next;  
    }
    printf("%.2f -> ", temp -> data);
    printf("NULL\n");
}

int main() {
    Node *head = NULL;
    int choice, pos;
    float data;

    while (1) {
        printf("\n1. Insert at Beginning");
        printf("\n2. Insert At Given Position");
        printf("\n3. Insert at End");
        printf("\n4. Delete from Beginning");
        printf("\n5. Delete from End");
        printf("\n6. Delete at given position");
        printf("\n7. Display");
        printf("\n8. Exit\nChoose: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("Enter data: ");
            scanf("%f", &data);
            head = insertAtBeginning(head, data);
            break;
        case 2:
            printf("Enter data: ");
            scanf("%f", &data);
            if(head == NULL) {
                head = insertAtPosition(head, data, 0);
                
            }
            else {
                printf("Enter position where you want to create a node: ");
                scanf("%d", &pos);
                head = insertAtPosition(head, data, pos);

            }
            break;
        case 3:
            printf("Enter data: ");
            scanf("%f", &data);
            head = insertAtEnd(head, data);
            break;

        case 4:
            head = deleteFromBeginning(head);
            break;

        case 5:
            head = deleteFromEnd(head);
            break;
        case 6:
            if(head == NULL) 
                printf("No data to be deleted\n"); break;
            printf("Insert the position of the node you want to delete = ");
            scanf("%d", &pos);
            head = deleteFromMiddle(head, pos);
            break;
        case 7:
            display(head);
            break;

        case 8:
            freeList(head);
            printf("Exiting...\n");
            exit(0);

        default:
            printf("Invalid choice\n");
        }
    }
}
