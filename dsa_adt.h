//This programs numerates all the DSA basics functions and algorithms 
//For more Information about DSA topics check out "dsareadme.me"

#ifndef DSAADT_H
#define DSAADT_H

//stack implementation 
typedef struct Stack {
	float *items;
	int top;
}Stack;	

//"ADT" stack function prototype
void push(Stack*, float);
float pop(Stack*);
int check_index(Stack*);

//traversing is done in the main program due to header file being silent and independent doesn't necessary needs any printing functions 



#endif
