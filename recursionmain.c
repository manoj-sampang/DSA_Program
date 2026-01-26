#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include "recursion.h"

int main() {
	int res, choice;
	int n1, n2, n;
	while(1) {
		printf("=== USING RECURSION ===\n");
		printf("1. Tower Of Hanoi\n");
		printf("2. Factorial\n");
		printf("3. Fibonacci Series\n");
		printf("4. Greatest Common Divisor(GCD)\n");
		printf("5. Exit\n");
		printf("Choose(1 - 5) = ");
		scanf("%d",&choice);
		
		switch(choice) {
			case 1:
				printf("Enter no. of disks to arranage= ");
				scanf("%d", &n);
				TOH(n , 'S', 'T', 'D');
				n1 = pow(2, n) - 1;
				printf("\nHence Needs %d moves to arrange the disk from Source To Destination\n", n1);
				break;
			case 2:
				printf("Enter no. to  find the factorial of = ");
				scanf("%d", &n);
				res = fact(n);
				printf("Factorial = %d", res);
				break;
			case 3:
				printf("Enter no. of terms you want the fibonacci till = ");
				scanf("%d", &n);
				printf("Fibonacci Series : ");
				for(int i = 0; i < n; ++i) {
					res = fibonacci(i);
					printf("%d\t", res);
						
				} 
				printf("\n");
				break;
			case 4:
				printf("Enter any two numbers for Gcd Finding\n");
				printf("num1 = ");
				scanf("%d", &n1);
				printf("num2 = ");
				scanf("%d", &n2);
				res = gcd(n1, n2);
				printf("Greatest Common Divisor(GCD) = %d\n", res);
				break;
			case 5:
				printf("Exiting...\n");
				exit(0);
			default:
				printf("Invalid Number\n");
		}
	}
	return 0;
}


