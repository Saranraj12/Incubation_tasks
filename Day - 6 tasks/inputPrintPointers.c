//  C program to input and print array elements using pointers

#include <stdio.h>

void inputArray(int n, int* arr) {
	for(int i = 0;i <n;i++) {
		printf("Enter the element %d : ",i+1);
		scanf("%d",(arr+i));
	}
	printf("The Array Elements Are -- ");
	for(int i = 0;i <n;i++) {
		printf("%d ",*(arr+i));
	}
}

int main() {
	int len;
	printf("Enter the length of the array : ");
	scanf("%d",&len);
	int arr[len];
	inputArray(len,arr);
	return 0;
}