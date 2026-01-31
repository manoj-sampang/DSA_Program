// this file contains the functions defintions of all the dsa algorithms which is implemented at "dsa_adt.h"

#include "dsa_adt.h"
#include <stdlib.h>
#include <stdio.h>

void push(Stack* st, float data) {
	if(st -> top == MAX - 1) {
		printf("STACK reached its maximum cacapcity..\n");
		printf("So, Cannot be Pushed into stack..\n");
		return;
	}
	st -> items = data;
	st -> top++;	
	
}
float pop(Stack* st) {
	if(st -> top == -1) {
		printf("Stack is Empty\n");
		return;
	}
	float temp;
	temp  = st -> *(items + top);
	st -> top--;
	return temp;	
}

int check_index(Stack* st) {
	return st -> top;
}
