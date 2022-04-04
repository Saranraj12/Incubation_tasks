// To remove an element in an array using Call back

#include <stdio.h>

int returnIndex(int element,int n,int arr[n]) {
	int i;
	for (i = 0;i <n;i++) {
		if (element == arr[i])
			return i;
	}
	return -1;
}
void print(int n, int arr[]) {
	int i;
	for(i =0;i <n;i++) {
		printf("%d ",arr[i]);
	}
	printf("\n");
}

void removeElement(int element ,int n,int arr[n],int (*ret)(int,int,int[])) {
	int index = ret(element,n,arr);
	int i;
	if (index == -1) {
		printf("Element was not there...");
		return;
	}
	for (i = index;i < n - 1;i++) {
		arr[i] = arr[i+1];
	}
	n--;
	print(n,arr);
		
}

int main() {
	int n,i,delElement;
	printf("\nEnter the number of elements : ");
	scanf("%d",&n);
	int arr[n];
	for(i = 0;i < n;i++) {
		scanf("%d",&arr[i]);
	}
	printf("\n Elements are :\n");
	print(n,arr);
	printf("\n Enter the element to delete : ");
	scanf("%d",&delElement);
	int (*ptr)(int,int,int[]) = returnIndex;
	removeElement(delElement,n,arr,ptr);
	
}
