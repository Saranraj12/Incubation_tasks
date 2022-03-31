//Rotate the array

#include <stdio.h>

void rotate(int* arr,int ch,int n,int size) {
	int i,j;
	printf("\nRotated Array :  ");
	if(ch ==1) {
		for (i = n;i < size;i++) {
			printf("%d ",arr[i]);
		}
		for (i = 0;i < n;i++) {
			printf("%d ",arr[i]);
		}
		return;
	}
	for (i = size-n;i < size;i++) {
		printf("%d ",arr[i]);
	}
	for (i = 0;i < size-n;i++) {
		printf("%d ",arr[i]);
	}
}

int main() {
	int size,n;
	int ch;
	printf("Enter the number of elements in the array : \n");
	scanf("%d",&size);
	int arr[size],i;
	for (i = 0;i < size;i++) {
		scanf("%d",&arr[i]);
	}
	printf("\n");
	printf("\nPress '1' for left\nPress'2' for right");
	scanf("%d",&ch);
	printf("\nEnter the number of rotation needed");
	scanf("%d",&n);
	rotate(arr, ch, n%size,size);
}
