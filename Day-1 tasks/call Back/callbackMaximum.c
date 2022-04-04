// Maximum of n numbers using callback

#include<stdio.h>
#define MAX(X,Y) X>Y?X:Y

int maximum(int arr[]) {
	int i, max;
	n = sizeof(arr)/sizeof(int);
	for(i = 1;i < n;i++) {
		max = MAX(arr[i-1],arr[i]);
	}
	return max;
}
void print(int arr[],int (*max)(int)) {
	printf("%d",max(arr));
	
}
int main() {
	int n;
	printf("Enter the number of elements : ");
	scanf("%d",&n);
	int arr[n];
	printf("\nEnter the elements one by one : \n");
	for (i = 0;i < n;i++) {
		scanf("%d",arr+i);
	}
	int (*max)(int[]) = maximum;
	print(arr,max);
	
}
