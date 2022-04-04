// Cube upto n terms using callback

#include <stdio.h>

int square(int n){
	return n*n;
}

int cube (int n, int (*sqr)(int)) {
	return n*sqr(n);
}

int main() {
	int n,i;
	printf("\n Enter the N value : ");
	scanf("%d",&n);
	int (*sqr_ptr)(int) = square;
	for (i = 1;i <= n;i++) {
		printf("%d - %d\n",i,cube(i,sqr_ptr));
	}
}
