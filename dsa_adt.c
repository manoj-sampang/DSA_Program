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