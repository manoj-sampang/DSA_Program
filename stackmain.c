#include <stdio.h>
#include <stdbool.h>
#include "adtstack.h" 

int main() {
    Stack s;
    s.top = -1;
    float data;
    int choice;
    do {
        printf("=== PERFORM STACK OPERATIONS ===\n");
        printf("1. Push\n2. Pop\n3. Traverse\n4. Exit\n");
        printf("Choose(1 - 4)= ");
        scanf("%d", &choice);

        if(choice == 1) {
            printf("Enter data to be pushed inside stack = ");
            scanf("%f", &data);
            push(&s, data);
        }
        if(choice == 2) {
            pop(&s);
        }
        if(choice == 3) {
            traverse(&s);
        }

    }while(choice != 4);
    return 0;
}