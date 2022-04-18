/*Write a program to following pattern
1
1 2
1 2 3
1 2 3 4
=======
1 2 3 4
1 2 3
1 2
1
*/

#include <stdio.h>

void pattern(int n){
	int len = n * 2 + 1,choice,size;
	for(int i = 0;i < len;i++){
		choice = (i == n) ? 1 : 0;
		size = (i<n) ? i : len - i - 1;
		if(!choice){
			for(int j = 0;j <= size;j++){
				printf("%d ",j+1);
			}
		}
		else{
			for(int k = 0;k < len - 2;k++){
				printf("=");
			}
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