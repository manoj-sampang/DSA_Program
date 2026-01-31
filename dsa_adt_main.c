#include "dsa_adt.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
void clear_screen()
{
#ifdef _WIN32
	system("cls");
#else
	system("clear");
#endif
}
void main_menu();
void main_stack(int);
Stack *create_stack(int);
void traverse_stack(Stack *);
void free_stack(Stack *);
// Hence This programs run most of dsa_adt.h code where all dsa _adt are implemented

int main()
{
	// Stack
	main_menu();
	return 0;
}
void main_menu()
{
    char choose;
    int n;
    while (1)
    {
        printf("===  DASHBOARD  ====\n");
        printf("1. STACK OPERATION\n");
        printf("$. Exit\n");
        printf("Choose = ");
        fflush(stdout);
        scanf("%c", &choose);
        while(getchar() != '\n');  // Clear entire buffer
        
        switch (choose)
        {
        case '1':
            printf("Insert Total capacity of Stack = ");
            fflush(stdout);
            scanf("%d", &n);
            while(getchar() != '\n');  // Clear entire buffer
            printf("Creating Stack....\n");
            printf("Stack Created, Procceed\n");
            main_stack(n);
            clear_screen();
            break;
        case '$':
            printf("Exiting...\n");
            return;
        default:
            printf("Invalid Case\n");
        }
    }
}

void main_stack(int n)
{
    clear_screen();
    char choice;
    float value, popped_value;
    Stack *st = create_stack(n);
    while (1)
    {
        printf(" == Stack ===\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Traverse\n");
        printf("4. Check TOP Value\n");
        printf("$. Back to Dashboard\n");
        printf("Choose = ");
        fflush(stdout);
        scanf("%c", &choice);
        while(getchar() != '\n');  // Clear entire buffer
        
        switch (choice)
        {
        case '1':
            printf("Enter the value inside Stack = ");
            fflush(stdout);
            scanf("%f", &value);
            while(getchar() != '\n');  // Clear entire buffer
            push(st, value, n);
            printf("Value Pushed to Stack\n");
            break;
        case '2':
            popped_value = pop(st);
            if (popped_value == -1)
            {
                break;
            }
            printf("The top value of Stack is Stack[top] = %f\n", popped_value);
            break;
        case '3':
            traverse_stack(st);
            break;
        case '4':
            printf("The Top value of Stack is TOP = %d\n", check_index(st));
            break;
        case '$':
            free_stack(st);
            return;
        }
    }
}
Stack *create_stack(int n)
{
	Stack *st = (Stack *)malloc(sizeof(Stack));
	st->items = (float *)malloc(n * sizeof(float));
	st->top = -1;
	return st;
}

void traverse_stack(Stack *st)
{
	if (check_index(st) == -1)
	{
		printf("The Stack Can't be Traversed Because it is empty\n");
		return;
	}
	int index = st->top;
	int i = 0;
	while (index != -1)
	{
		i == 0 ? printf("[TOP] = %f\n", *(st->items + index)) : printf("[TOP - %d] = %f\n", i, *(st->items + index));
		index--;
		i++;
	}
}
void free_stack(Stack *st)
{
	free(st->items);
	free(st);
}
