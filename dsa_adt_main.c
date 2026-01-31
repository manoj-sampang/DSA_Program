#include "dsa_adt.h"
#include <stdio.h>
#include <stdlib.h>
void menu_menu();
void main_stack(int);
Stack create_stack(int);
void traverse_stack(Stack*);
void free_stack(Stack*);
//Hence This programs run most of dsa_adt.h code where all dsa _adt are implemented

int main() {
	//Stack
	main_menu();
	return 0;
}
void menu_menu() {
	char choice;
	int n;
	// This is main menu related to DSA algorithms
	printf("===  DASHBOARD  ====\n");
	printf("1. STACK OPERATION\n);
	printf("$. Exit\n);
	printf("Choose = );
	scanf("%c", &choice);
	switch(choice) {
		case '1':
			printf("Insert Total capacity of Stack = ");
			scanf("%d", &n);
			printf("Creating Stack....\n");
			printf("Stack Created, Procceed\n");
			main_stack(n);
			break;
		case '$':
			printf("Exiting...\n");
			return;
		default:
			printf("Invalid Case\n");
			
	}
}
void main_stack(int n) {
	char choice;
	Stack *st = create_stack(n);
	printf(" == Stack ===\n);
	printf("1. Push\n");
	printf("2. Pop\n");
	printf("3. Traverse\n);
	printf("4. Check TOP Value");
	printf("$. Back to Dashboard\n");
	printf("Choose = ");
	scanf("%c", &choice);
	switch(choice) {
		case '1':
			printf("Enter the value inside Stack = \n");	
			scanf("%f", &value);
			push(st, value);
			printf("Value Pushed to Stack\n");
			break;
		case '2':
			printf("printf("The top value of Stack is Stack[top] = %f\n", pop());
			break;
		case '3':
			stack_traverse(st);
			break;
		case '4':
			printf("The Top value of Stack is TOP = %d\n", check_index(st));
	}
			break;
		case '$':
			free_stack(st);
			
			return;
		default:
			printf("Invalid Case\n");
}
Stack create_stack(int n) {
	Stack *st = (float*)malloc(n * sizeof(float));
	return st;
}

void traverse_stack(Stack* st) {
	if(check_index(st) == -1) {
		printf("The Stack Can't be Traversed Because it is empty\n");
		return;
	}
	int index = st -> top;
	int i = 0;
	while(index != -1) {
		i == 0 ? printf("[TOP] = %f\n", st -> *(items + index)) : printf("[TOP - %d] = %f\n", st -> (*items + index));	
	index--;
	i++;	
	}
}
void free_stack(Stack* st) {
	free(st);
}
