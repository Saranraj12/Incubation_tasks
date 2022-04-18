// Write a program to swap two numbers using call by value and call by address.

#include <stdio.h>

int temp;
void swapbyValue(int a,int b){
	temp = a;
	a = b;
	b = temp;
}

void swapbyReference(int *a,int *b){
	temp = *a;
	*a = *b;
	*b = temp;
}

int main() {
	int a,b;
	printf("\nEnter the a value : ");
	scanf("%d",&a);
	printf("\nEnter the b value : ");
	scanf("%d",&b);
	printf("\n\nSwapping the Values\n\n");
	swapbyValue(a,b);
	printf("Call By Value -> a = %d, b = %d\n",a,b);
	swapbyReference(&a,&b);
	printf("Call By Reference -> a = %d, b = %d",a,b);
}