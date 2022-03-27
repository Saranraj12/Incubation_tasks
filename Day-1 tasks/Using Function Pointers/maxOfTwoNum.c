// Program to find the maximum of two numbers using function pointers

#include <stdio.h>

int maximum(int num1,int num2) {
	return num1 > num2 ? num1 : num2;
}

int main() {
	int num1,num2;
	printf("Enter the first number : ");
	scanf("%d",&num1);
	printf("Enter the second number : ");
	scanf("%d",&num2);
	int (*max_ptr)(int,int) = maximum;
	printf("Maximum number is %d",max_ptr(num1, num2));
	return 0;
}