#ifndef ADTSTACK_H
#define ADTSTACK_H
#define MAX 100


typedef struct {
    float item[MAX];
    int top;
}Stack;


bool isEmpty(Stack *);
bool isFull(Stack *);
void traverse(Stack *);
void pop(Stack *);
void push(Stack *, float);


#endif
