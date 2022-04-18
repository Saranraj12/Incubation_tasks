// Write a program in c to find the maximum number between two numbers using a Pointers

#include <stdio.h>

int maxUsingPointers(int *a,int *b){
	return *a > *b ? *a : *b;
}

int main() {
	
	int a,b;
	printf("\nEnter the value of 'a' : ");
	scanf("%d",&a);
	printf("\nEnter the value of 'b' : ");
	scanf("%d",&b);
	int max = maxUsingPointers(&a,&b);
	printf("\nMax of two numbers is %d",max);
	return 0;
}