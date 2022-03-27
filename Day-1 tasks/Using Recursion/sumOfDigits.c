// Sum Of the digits Using Recursion

#include <stdio.h>

int sumOfDigits(int num) {
	if (num == 0)
		return num;
	return sumOfDigits(num/10) + num%10;
}

int main() {
	
	int num;
	printf("Enter the number : ");
	scanf("%d",&num);
	printf("The sum of digits of %d is %d", num, sumOfDigits(num));
	return 0;
}