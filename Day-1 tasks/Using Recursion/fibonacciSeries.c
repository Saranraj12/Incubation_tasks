// To get the Fibonacci Series

#include <stdio.h>

int fibonacci(int n) {
	if (n < 2) 
		return n;
	return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
	int num;
	printf("Enter the number : ");
	scanf("%d",&num);
	printf("Fibonacci Series are ");
	for (int i = 0;i < num;i++)
		printf("%d ",fibonacci(i));
}