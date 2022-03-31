// odd and even number counts

#include<stdio.h>

int main() {
	int m,n,i,j,o=0,e=0;
	printf("Enter the number of rows : ");
	scanf("%d",&m);
	printf("Enter the number of columns : ");
	scanf("%d",&n);
	int arr[m][n];
	for (i = 0;i < m;i++){
		for(j = 0;j < n;j++) {
			scanf("%d",&arr[i][j]);
			if(arr[i][j] % 2 == 1){
				o++;
			}
			else{
				e++;
			}
		}
	}
	printf("\nThe Odd count is %d\n",o);
	printf("The Even count is %d",e);
}
