#include <stdio.h>
#include<string.h>

typedef struct products{
	char name[20];
	float price;
}Product;
static int id = 0;

int lengthOfString(char* str) {
	if (str[0] == '\0')
		return 0;
	return 1 + lengthOfString(str + 1);
}

void copy(char* original, char* copy) {
	int i;
	for (i = 0; i < lengthOfString(original);i++) 
		copy[i] = original[i];
	copy[i] = '\0';
}

void addProduct(Product p[]) {
	char p_name[20];
	float p_price;
	printf("\nEnter the product name : ");
	scanf("%s",&p_name);
	printf("\nEnter the product price : ");
	scanf("%f",&p_price);
	copy(p_name,p[id].name);
	p[id].price = p_price;
	id++;	
}

void showProducts(Product p[]) {
	if (id == 0)
		printf("No Products Available");
	else {
		int i;
		for (i = 0;i < id;i++) {
			printf("\nProduct %d is %s and its price %2f",i+1,p[i].name,p[i].price);
		}
	}
}

int main() {
	int n,i;
	printf("Enter the number of products :");
	scanf("%d",&n);
	struct products product[n]; 
	for (i = 0;i < n;i++)
		addProduct(product);
	showProducts(product);
}
