// To insert an element in array using call Back

#include <stdio.h>

void inputArray(int n, int* arr, void (*fun)(int,int*)) {
	for(int i = 0;i < n;i++) {
		printf("Enter the element %d : ",i+1);
		scanf("%d",&arr[i]);
	}
	fun(n, arr);
}

void print(int n, int* arr) {
	printf("The Array Elements Are -- ");
	for(int i = 0;i < n;i++) {
		printf("%d ",arr[i]);
	}
}

void insertElement(int value, int index, int* arr, int arr_size) {
	arr_size++;
	for (int i = arr_size - 1;i >= index;i--) {
		arr[i] = arr[i-1];
	}
	arr[index] = value;
	print(arr_size, arr);
}

int main() {
	int l, element, index;
	printf("Enter the length of the array : ");
	scanf("%d",&l);
	int arr[100] = {0};
	void (*print_ptr)(int, int*) = print;
	inputArray(l, arr, print_ptr);
	printf("\nEnter the element to insert : ");
	scanf("%d",&element);
	printf("Enter the position you  want to add : ");
	scanf("%d",&index);
	void (*insert_ptr)(int,int,int*,int) = insertElement;
	insert_ptr(element,index,arr,l);
	return 0;
