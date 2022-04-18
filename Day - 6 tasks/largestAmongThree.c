//  Largest among three numbers using nested if statement

#include <stdio.h>

int largestAmongThree(int a,int b,int c){
	if (a > b) {
		if (a > c){
			return a;
		}
		else {
			return c;
		}
	}
	else {
		if (b > c) {
			return b;
		}
		else {
			return c;
		}
	}
}

int main() {
	int a, b, c;
	printf("\nEnter the value of 'a','b','c' : ");
	scanf("%d %d %d",&a,&b,&c);
	printf("%d is the largest number among %d,%d,%d",largestAmongThree(a,b,c),a,b,c);
}