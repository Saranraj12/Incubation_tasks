// Write a program in c to perform addition of two matrices.


#include <stdio.h>

void getArray(int row, int col, int arr[row][col]){
	for(int i = 0;i < row;i++) {
		for (int j = 0;j < col;j++) {
			scanf("%d",&arr[i][j]);
		}
	}
}

void add(int row,int col,int arr1[row][col],int arr2[row][col]) {
	for(int i = 0;i < row;i++) {
		for (int j = 0;j < col;j++) {
			printf("%d ",arr1[i][j] + arr2[i][j]);
		}
		printf("\n");
	}
}

int main() {
	int row,col;
	printf("\nEnter the number of rows : ");
	scanf("%d",&row);
	printf("\nEnter the number of columns : ");
	scanf("%d",&col);
	int A[row][col], B[row][col];
	printf("\nEnter the first Matrix elements %dx%d\n",row,col);
	getArray(row, col, A);
	printf("\nEnter the second Matrix elements %dx%d\n",row,col);
	getArray(row, col, B);
	printf("\nThe sum of the two matrices are : \n");
	add(row, col, A, B);
	return 0;
}