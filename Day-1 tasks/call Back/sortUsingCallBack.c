// Sort n numbers using call back

#include <stdio.h>

void print(int n,int arr[]);

void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void sort(int n,int arr[]) {
	int i,j;
	for (i= 0;i < n;i++) {
		for (j = i+1;j < n;j++) {
			if(arr[i] > arr[j]) 
				swap(arr+i,arr+j);
		}
	}
}

void callBackSort(int n,int arr[],void (*sort_ptr)(int,int[])) {
	print(n,arr);
	sort_ptr(n,arr);
	print(n,arr);
}

void print(int n,int arr[]) {
	int i,j;
	for (i = 0;i < n;i++) {
		printf("%d ",*(arr+i));
	}
	printf("\n");
}

int main() {
	int n,i;
	printf("\nEnter the number of elements : ");
	scanf("%d",&n);
	int arr[n];
	for(i = 0;i < n;i++) {
		scanf("%d",&arr[i]);
	}
	void (*ptr)(int,int[]) = sort;
	callBackSort(n,arr,ptr);
}
