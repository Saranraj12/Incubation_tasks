 // To search an Element in array using pointers
 
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

int searchElement(int value, int* arr, int n) {
	for (int i = 0;i < n;i++){
		if (arr[i] == value)
			return i;
	}
	return -1;
}
int main() {
	int l,search;
	printf("Enter the length of the array : ");
	scanf("%d",&l);
	int arr[l];
	void (*arr_ptr)(int, int*) = inputArray;
	arr_ptr(l, arr);
	printf("\nEnter the element you want to search : ");
	scanf("%d",&search);
	int (*search_ptr)(int, int*, int) = searchElement;
	int index = search_ptr(search, arr, l);
	if(index != -1)
		printf("Your searching element is found at index => %d",index);
	else
		printf("No element Found");
	return 0;
}
 
 