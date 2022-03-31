// Upper Triangular

#include <stdio.h>

void isUpperTriangular(int m,int n,int arr[m][n]) {
	int i,j,f=0;
	for (i = 1;i < m;i++){
		for (j = 0;j < i;j++) {
			if (arr[i][j] != 0)
			{
				f = 1;
				printf("Its not a upper triangular");
				break;
				
			}
		}
		if(f == 1) break;
	}
	printf("\nIts a upper triangular\n");
	
	for (i = 0;i < m;i++){
		for(j = 0;j < n;j++) {
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}

int main() {
	int m,n,i,j,f = 0;
	printf("Enter the number of rows : ");
	scanf("%d",&m);
	printf("Enter the number of columns : ");
	scanf("%d",&n);
	int arr[m][n];
	for (i = 0;i < m;i++){
		for(j = 0;j < n;j++) {
			scanf("%d",&arr[i][j]);
		}
	}
	isUpperTriangular(m,n,arr);
}
