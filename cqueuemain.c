#include <stdio.h>
#include <stdbool.h>
#include "adtcqueue.h"

int main() {
    cqueue cq;
    cq.front = 0;
    cq.rear = 0;
    int choice;
    float data;
    do {
    printf("=== Circular Queue Operations ===\n");
    printf("1. Enqueue\n2. Dequeue\n3. Traverse\n4. Exit\n");
    printf("Choice(1 - 4)= ");
    scanf("%d", &choice);
    if(choice == 1) {
        printf("Enter data to be enqueued = ");
        scanf("%f", &data);
        enqueue(&cq, data);
    }
    if(choice == 2) 
        dequeue(&cq);

    if(choice == 3) 
        traverse(&cq);

    }while(choice != 4);
    return 0;
}