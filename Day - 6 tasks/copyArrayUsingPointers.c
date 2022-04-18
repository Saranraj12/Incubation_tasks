// C program to copy one array to another using pointers

#include <stdio.h>

void print(int n, int arr[])
{
	for(int i = 0;i < n;i++){
		printf("%d ",*(arr+i));
	}
	printf("\n");
}
int main() {
	int n,i;
	printf("\nEnter the size of the array : ");
	scanf("%d",&n);
	int actualArray[n],copyArray[n];
	int *ptr_s = actualArray;
	int *ptr_d = copyArray;
	printf("\nEnter the elements  one by one : \n");
	for(i = 0;i < n;i++){
		scanf("%d",(actualArray + i));
	}
	i = 0;
	printf("\nBefore copying.....");
	printf("\nActual Array elements are : ");
	print(n, actualArray);
	printf("\nCopy Array elements are : ");
	print(n, copyArray);
	while(i < n){
		*(copyArray+i) = *(actualArray+i);
		i++;
	}
	printf("\nAfter copied....");
	printf("\nActual Array elements are : ");
	print(n, actualArray);
	printf("\nCopy Array elements are : ");
	print(n, copyArray);
	
}