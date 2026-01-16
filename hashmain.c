#include <stdio.h>
#include "hashfunc.h"
#include <string.h>

void display(Linkedlist* table, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d: ", i);

        Node* temp = table[i].head;

        if (temp == NULL) {
            printf("[ ]");
        } else {
            while (temp != NULL) {
                printf("[%s] -> ", temp->name);
                temp = temp->next;
            }
            printf("NULL");
        }
        printf("\n");
    }
}

int main() {
    Linkedlist table[TABLE_SIZE] = {0};
    char ch[MAX];

    printf("--- Hash Table with Chaining ---\n");

    while (1) {
        printf("Enter name (or exit): ");
        scanf("%s", ch);

        if (strcmp(ch, "exit") == 0)
            break;

        insertName(table, ch);
    }

    display(table, TABLE_SIZE);
    freeList(table);

    return 0;
}
