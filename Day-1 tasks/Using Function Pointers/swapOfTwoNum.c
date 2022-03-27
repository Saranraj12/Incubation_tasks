// Swap two numbers using function pointers

#include <stdio.h>

void swap(int* val1,int* val2){
	int temp = *val1;
	*val1 = *val2;
	*val2 = temp;
}

int main() {
	int num1,num2;
	printf("Enter the first number : ");
	scanf("%d",&num1);
	printf("Enter the second number : ");
	scanf("%d",&num2);
	void (*swap_ptr)(int*,int*) = swap;
	swap_ptr(&num1,&num2);
	printf("First Number : %d\nSecond number : %d",num1, num2);
	return 0;
}