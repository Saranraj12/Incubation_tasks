// Two matrices are equal or not

#include <stdio.h>

void isCheck(int m,int n,int arr[m][n],int arr2[m][n]) {
	int i,j;
	for(i = 0;i < m;i++){
		for(j = 0;j < n;j++) {
			if (arr[i][j] != arr2[i][j]) {
				printf("Both the matrices are not Equal");
				return;
			}
		}
	}
	printf("Both the matrices are Equal");
}

int main() {
	int m,n,i,j;
	printf("Enter the number of rows : ");
	scanf("%d",&m);
	printf("Enter the number of columns : ");
	scanf("%d",&n);
	int arr[m][n],arr2[m][n];
	printf("\nEnter the first 2d array elements :");
	for (i = 0;i < m;i++){
		for(j = 0;j < n;j++) {
			scanf("%d",&arr[i][j]);
		}
	}
	printf("\nEnter the first 2d array elements :");
	for (i = 0;i < m;i++){
		for(j = 0;j < n;j++) {
			scanf("%d",&arr2[i][j]);
		}
	}
	isCheck(m,n,arr,arr2);
	
	return 0;
}
