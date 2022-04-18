// Write a program in c to search an element from an array by linear search method

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

void searchElement(int value,int len,int arr[])
{
	for(int i = 0;i < len;i++){
		if(value == arr[i]){
			printf("\nElement is found at index of %d",i);
			return;
		}
	}
	printf("\nElement Not Found\n");
}
int main() {
	int len,search;
	printf("Enter the length of the array : ");
	scanf("%d",&len);
	int arr[len];
	inputArray(len,arr);
	printf("\nEnter the elements you want to search : ");
	scanf("%d",&search);
	searchElement(search , len, arr);
	return 0;
}