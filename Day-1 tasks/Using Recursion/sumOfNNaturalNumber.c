// To find the sum of 'n' terms of natural number

#include <stdio.h>

int sumOfSeries(int num) {
	if (num == 1)
		return num;
	return num + sumOfSeries(num-1);
}

int main() {
	int num;
	printf("Enter the number : ");
	scanf("%d",&num);
	printf("Sum of '%d' terms of natural number is %d", num, sumOfSeries(num));
}