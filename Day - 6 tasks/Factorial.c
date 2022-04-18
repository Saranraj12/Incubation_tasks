// Write a program to find the factorial of a number using recursion

#include <stdio.h>
#include <stdlib.h>

int factorial(int n){
	if (n == 0 || n == 1)
		return 1;
	return n * factorial(n - 1);
}

int main() {
	int n;
	printf("\nEnter the n value : ");
	scanf("%d",&n);
	if(n < 0){
		printf("\nYou entered the negative number");
		exit(0);
	}
	printf("\nThe factorial of %d is %d\n",n,factorial(n));
}