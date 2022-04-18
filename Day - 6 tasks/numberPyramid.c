/*
Write a program to following pattern
   1
  2 3
 4 5 6
7 8 9 10
*/

#include <stdio.h>

void pattern(int n){
	int num = 1;
	for(int i = 1;i <= n;i++){
		for(int j = 0;j < n - i;j++){
			printf(" ");
		}
		for(int k = 0;k < i;k++){
			printf("%d ",num++);
		}
		printf("\n");
	}
}

int main() {
	int n;
	printf("\nEnter the value of n : ");
	scanf("%d",&n);
	pattern(n);
}