// Write a program to find the sum of 10 natural no using 1-D array

#include <stdio.h>

void inputArray(int n, int* arr) {
	int i = 0;
	while(i < n){
		printf("Enter the element %d : ",i+1);
		scanf("%d",&arr[i]);
		if(arr[i] < 0) {
			printf("\n\nEnter only natural number...\n\n");
			continue;
		}
		i++;		
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