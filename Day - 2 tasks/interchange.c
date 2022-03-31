// Interchange the diagonals
#include <stdio.h>

void swap(int* a,int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
void interchangeDig(int m,int n,int arr[m][n] ) {
	int j = n,i;
	for (i = 0;i < m && j > 0;i++) {
		swap(&arr[i][i],&arr[i][j-i-1]);
	}
}
void print(int m,int n,int arr[m][n]) {
	int i,j;
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
	interchangeDig(m,n,arr);
	print(m,n,arr);
}
