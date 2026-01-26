#include "recursion.h"
#include <stdio.h>

//functions definations

void TOH(int n, char A, char B, char C) {
	if(n > 0) {
		TOH(n - 1, A, C, B);
		printf("\n%c ==> %c", A, C);
		TOH(n - 1, B, A, C); 
	}
}

int fact(int num) {
	if(num <= 1)
		return 1;
	return num * fact(num - 1);
}

int fibonacci(int n) {
	if(n == 0)
		return 0;
	if(n == 1)
		return 1;
	return fibonacci(n - 1) + fibonacci(n - 2);
}

int gcd(int num1 , int num2) {
	//using ecludian method
	if(num1 < num2)
		return gcd(num2, num1);
	if(num2 == 0)
		return num1;
	return gcd(num2, num1 % num2);
}
