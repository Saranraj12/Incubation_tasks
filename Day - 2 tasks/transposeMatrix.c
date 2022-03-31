// Transpose matrix 

#include <stdio.h>

void swap(int *a,int* b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void transpose(int m,int n, int arr[m][n]) {
	int i,j;
	for (i = 0;i < m;i++){
		for(j = 0;j < i;j++) {
			if (i!=j)
				swap(&arr[i][j],&arr[j][i]);
		}
	}
}

void print(int m,int n,int arr[m][n]) {
	int i,j;
	printf("\n The Matrix :\n");
	for (i = 0;i < m;i++){
		for(j = 0;j < n;j++) {
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}

int main() {
	int m,n,i,j;
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
	print(m,n,arr);
	transpose(m,n,arr);
	print(m,n,arr);
}
