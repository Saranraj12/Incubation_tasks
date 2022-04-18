// Write a program to take input of 10 elements, store and display it using one Dimensional array .

#include <stdio.h>

void inputArray(int n, int* arr) {
	for(int i = 0;i <n;i++) {
		printf("Enter the element %d : ",i+1);
		scanf("%d",&arr[i]);
	}
	printf("The Array Elements Are -- ");
	for(int i = 0;i <n;i++) {
		printf("%d ",arr[i]);
	}
}

int main() {
	int l;
	printf("Enter the length of the array : ");
	scanf("%d",&l);
	int arr[l];
	inputArray(l,arr);
	return 0;
}