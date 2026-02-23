// this file contains the functions defintions of all the dsa algorithms which is implemented at "dsa_adt.h"


#include "dsa_adt.h"	 
#include <stdlib.h>
#include <stdio.h>

void push(Stack* st, float data, int capacity) {
    if(st -> top == capacity - 1) {
        printf("STACK reached its maximum capacity..\n");
        printf("So, Cannot be Pushed into stack..\n");
        return;
    }
    st -> top++;
    *(st -> items + st -> top) = data;
}

float pop(Stack* st) {
    if(st -> top == -1) {
        printf("Stack is Empty\n");
        return -1;
    }
    float temp;
    temp  = *(st -> items + st -> top);
    st -> top--;
    return temp;	
}

int check_index(Stack* st) {
    return st -> top;
}
// Queue Implementation

void enqueue(Queue* q, float data, int capacity) {
	if(isFull(q, capacity)) 
		return;
	q -> rear++;
	*(q -> items + q -> rear) = data;
	
}
float dequeue(Queue* q) {
	if(isEmpty(q))
		return 0.0;
	q -> front++;
	return *(q -> items + q -> front);	
}
int isEmpty(Queue* q) {
	if(q -> rear == q -> front)
		return 1;
	else 
		return 0;
}
int isFull(Queue* q, int capacity) {
	if(q -> rear == capacity - 1) {
		return 1;
	}
	else 
		return 0;
}

// Circular Queue Implementation
void circular_enqueue(Queue* cq, float data, int size) {
	if(circular_isFull(cq, size))
		return;
	cq -> rear = (cq -> rear + 1) % size;
	*(cq -> items + cq -> rear) = data;
	printf("Enqueued in circular queue\n");
}

float circular_dequeue(Queue* cq, int size) {
	if(circular_isEmpty(cq)) {
		printf("Circular Queue is Empty\n");
		return 0.0;
	}
	cq -> front = (cq -> front + 1) % size;
	return *(cq -> items + cq -> front);
}
int circular_isFull(Queue* cq, int size) {
	if(cq -> front == (cq -> rear + 1) % size) {
		return 1;
	}
	else 
		return 0;
}

int circular_isEmpty(Queue* cq) {
	if(cq -> front == cq -> rear) 
		return 1;
	else 
		return 0;
}