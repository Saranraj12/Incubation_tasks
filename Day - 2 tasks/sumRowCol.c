//Sum of Each row and Columns

#include <stdio.h>

int main() {
	int m,n,i,j,sum =0;
	printf("Enter the number of rows : ");
	scanf("%d",&m);
	printf("Enter the number of columns : ");
	scanf("%d",&n);
	int arr[m][n];
	for (i = 0;i < m;i++){
		sum = 0;
		for(j = 0;j < n;j++) {
			scanf("%d",&arr[i][j]);
			sum += arr[i][j];
		}
		printf("%d row sum is %d\n",i+1,sum);
	}
	printf("\n");
	for (i = 0;i < m;i++){
		sum = 0;
		for(j = 0;j < n;j++) {
			sum += arr[j][i];
		}
		printf("%d column sum is %d\n",i+1,sum);
	}
}
