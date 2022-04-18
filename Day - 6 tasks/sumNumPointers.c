// Write a program to sum of two numbers using pointer

#include <stdio.h>

int addUsingPointers(int *a,int *b){
	return *a + *b;
}

int main() {
	
	int a,b;
	printf("\nEnter the value of 'a' : ");
	scanf("%d",&a);
	printf("\nEnter the value of 'b' : ");
	scanf("%d",&b);
	int sum = addUsingPointers(&a,&b);
	printf("\nSum of two numbers is %d",sum);
	return 0;
}