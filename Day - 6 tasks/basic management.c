// Build the basic management application by your own choice using functions

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void addProduct();
void deleteProduct();
void showProducts();

typedef struct product{
	int id;
	char name[20];
	int stock_count;
	char type[20];
	int price_per_kg;
}Product;

int productCount = 3;
Product products[10] = {1001,"Potato",25,"Vegetable",30,
						1002,"Apple",15,"Fruit",100,
						1003,"Carrot",45,"Vegetable",25};
int main() {
	int choice;
	printf("\n\n\n\n\t\t###############################################################################\n");
	printf("\n\n\n\n\t\t\t\t#### WELCOME TO SIMPLE INVENTORY SYSTEM ####\n");
	printf("\n\n\n\n\t\t###############################################################################\n");
	system("pause");
	while(1) {
		system("cls");
		printf("\n[1] Add Product\n[2] Delete Product\n[3] View Product\n[4] Exit");
		printf("\nEnter your choice : ");
		scanf("%d",&choice);
		switch(choice) {
			case 1: addProduct();
					break;
			case 2: deleteProduct();
					break;
			case 3: showProducts();
					break;
			case 4: exit(1);
			
			default: printf("\nInvalid Choice choose correctly.....\n");
		}
	}
}

void addProduct() {
	int choice;
	system("cls");
	printf("\n\n\t\t\t$$$$$$$$$$$$$$$$ ADD PRODUCT SECTION $$$$$$$$$$$$$$$$\n\n");
	products[productCount].id = 1001 + productCount;
	printf("\nEnter the type of the product : ");
	scanf("%s",products[productCount].type);
	printf("\nEnter the product name : ");
	scanf("%s",products[productCount].name);
	printf("\nEnter the stock Count : ");
	scanf("%d",&products[productCount].stock_count);
	printf("\nEnter the price per kg : ");
	scanf("%d",&products[productCount].price_per_kg);
	productCount++;
	printf("\n\n\n\t\t \"Product Added Successfully\"");
	printf("\n\nDo u want to view the total products => press '1' to go there : ");
	scanf("%d",&choice);
	if(choice == 1)
		showProducts();
}

void deleteProduct() {
	int id;
	printf("\nEnter the product id to delete: ");
	scanf("%d",&id);
	for(int i = 0;i < productCount;i++){
		if(id == products[i].id){
			printf("\n Product %s got deleted",products[i].name);
			products[i].id = -1;
			return;
		}
	}
	printf("\nInvalid Product ID");
}

void showProducts() {
	printf("\n\n\n\t\t\t------------------------------------------------------------\n");
	printf("\t\t\t|   ID   | Product Name | Product type  |  Stock  |  Price  |\n");
	printf("\t\t\t------------------------------------------------------------\n");
	for(int i = 0;i < productCount;i++){
		if(products[i].id!=-1)
			printf("\t\t\t| %-6d | %-12s | %-13s |  %-6d |  %-6d |\n",products[i].id,products[i].name,products[i].type,products[i].stock_count,products[i].price_per_kg);
	}
	printf("\t\t\t------------------------------------------------------------\n");
	system("pause");
}