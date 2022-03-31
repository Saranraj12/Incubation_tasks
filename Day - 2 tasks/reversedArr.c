// Reverse of an array

#include <stdio.h>

int main() {
	int size;
	printf("Enter the number of elements in the array : ");
	scanf("%d",&size);
	int arr[size],i,j;
	for (i = 0;i < size;i++) {
		scanf("%d",&arr[i]);
	}
	printf("Reversed Elements are : ");
	for(j = size - 1;j >=0;j--) {
		printf("%d ",arr[j]);
	}
}
