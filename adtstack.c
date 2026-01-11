#include <stdio.h>
#include <stdbool.h>
#include "adtstack.h"

bool isEmpty(Stack *s) {
    if(s -> top == -1) 
        return true;
    else 
        return false;
}

bool isFull(Stack *s) {
    if(s -> top == MAX -1)
        return true;
    else 
        return false;
}

void traverse(Stack *s) {
    if(isEmpty(s)) {
        printf("Stack is Empty...\n");
        return;
    }
    else {
        printf("Traversing...\n");
        int iter = s -> top;
        int iter1 = 0;
        do {
           iter == s -> top? printf("top = %.2f \t",s -> item[iter]) : printf("top - %d = %.2f \t", iter1, s -> item[iter]);
           iter--;
           iter1 ++;
        }while(iter != -1);
        printf("\n");
    }
}
void pop(Stack *s) {
    if(isEmpty(s)) {
        printf("Stack is Empty\n");
        return;
    }
    else {
        printf("poping latest entry\n");
        printf("Item = %.2f\n", s -> item[s -> top]);
        s -> top--;
    }
}
void push(Stack *s, float data) {
    if(isFull(s)) {
        printf("Stack is Full\n");
        return;
    }
    else {
        printf("Pushing Items\n");
        s -> top ++;
        s -> item[s -> top] = data;
        printf("Pushed to Stack\n");
    }
}