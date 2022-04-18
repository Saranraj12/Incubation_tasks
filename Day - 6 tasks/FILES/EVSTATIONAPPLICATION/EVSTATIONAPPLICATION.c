/* Build an application using C programming with your own individual concept and
logic. It must follows the given concepts */

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<stdbool.h>
#include<time.h>
#include<windows.h>

typedef struct user {
	int id;
	char name[20];
	char pass[8];
	char email[20];
	char phone[15];
}User;

int adminsCount = 3;
int customersCount = 5;
int powerSource = 1000;
User admin,customer;
//User admin[5] = {501,"admin1","apass1","admin1@xyz.com","9876543210",
//				 502,"admin2","apass2","admin2@xyz.com","9876543201",
//				 503,"admin3","apass3","admin3@xyz.com","8976543210"
//				};
//User customer[10] = {1001,"cust1","cpass1","cust1@xyz.com","894584884",
//					1002,"cust2","cpass2","cust2@xyz.com","894584883",
//					1003,"cust3","cpass3","cust3@xyz.com","894584882",
//					1004,"cust4","cpass4","cust4@xyz.com","894584881",
//					1005,"cust5","cpass5","cust5@xyz.com","894584880"
//					};

void menu();
void adminLogin();
void userLogin();
void addUser(int c);
void adminAccess();
void deleteCustomer();
void AddPower();
void showPowerAvailable();
void delay() {for(int i = 0;i < 100000000;i++);}

void main() {
	time_t t;
	time(&t);
	printf("\n\n\n\n\n");
	printf("\n\n\n\t\t\t\t\t#######################################################################################\n");
	printf("\n\t\t\t\t\t#                                                                                     #\n");
	printf("\n\t\t\t\t\t#                                                                                     #\n");
	printf("\n\t\t\t\t\t#                                                                                     #\n");
	printf("\n\t\t\t\t\t# # # # # # # # # # # # # # WELCOME TO EV STATION APPLICATION # # # # # # # # # # # # #\n");
	printf("\n\t\t\t\t\t#                                                                                     #\n");
	printf("\n\t\t\t\t\t#                                                                                     #\n");
	printf("\n\t\t\t\t\t#                                                                                     #\n");
	printf("\n\t\t\t\t\t#######################################################################################\n");
	printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tCurrent time : %s",ctime(&t));
	system("pause");
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tLOADING ");
	for(int i = 0;i < 4;i++){
		printf(". ");
		delay();
	}
	system("cls");
	menu();
	
}

void menu() {
	int choice;
	printf("\n\n\n\t\t\t# # # # # LOGIN PAGE # # # # # #\n\n\n");
	printf("\nChoose Any one : ");
	printf("\n\t[1] Administrator Login\n\t[2] User Login\n\t[3] Exit\n\nEnter your choice : ");
	scanf("%d",&choice);
	if (choice == 1){
		adminLogin();
	}
	else if(choice == 2){
		userLogin();
	}
	else if(choice == 3)
		exit(0);
	else{
		printf("\nEnter the correct choice...\n");
		system("cls");
		menu();
	}
}

void adminLogin(){
	char userName[20],passWord[10],ch;
	FILE *fp = fopen("admins.dat","r");
	int i,choice;
	system("cls");
	printf("\n\n\n\t\t\t############### ADMIN LOGIN ###############\n");
	printf("\nEnter the username : ");
	scanf("%s",userName);
	printf("Enter the password : ");
	for(i = 0;i < 10;i++){
		ch = getch();
		if(ch != 13){
			printf("*");
			passWord[i] = ch;
		}
		else {
			break;
		}
		
	}
	passWord[i] = '\0';
	while(fscanf(fp,"%d %s %s %s %s\n",&admin.id,admin.name,admin.pass,admin.email,admin.phone) != EOF){
		if(strcmp(admin.name,userName) == 0 && strcmp(admin.pass,passWord) == 0){
			printf("\nLogged in Successfully");
			adminAccess();
			return;
		}
	}
	printf("\nUserName or PassWord invalid \n");
	printf("\nIf u want to continue press '1' ");
	scanf("%d",&choice);
	if(choice == 1)
		menu();
	
}

void userLogin(){
	char userName[20],passWord[10],ch;
	FILE *fp = fopen("customers.dat","r");
	int i,choice;
	system("cls");
	printf("\n\n\n\t\t\t############### CUSTOMER LOGIN ###############\n");
	printf("\n[1] LOGIN\n[2] SIGN-UP");
	printf("\nEnter your choice: ");
	scanf("%d",&choice);
	if(choice == 2) {
		addUser(1);
		return;
	}
	else if(choice == 1) {
		printf("\nEnter the username : ");
		scanf("%s",userName);
		printf("Enter the password : ");
		for(i = 0;i < 10;i++){
			ch = getch();
			if(ch != 13){
				printf("*");
				passWord[i] = ch;
			}
			else {
				break;
			}
		}
		passWord[i] = '\0';
		while(fscanf(fp,"%d %s %s %s %s\n",&customer.id,customer.name,customer.pass,customer.email,customer.phone)!=EOF){
			if(strcmp(customer.name,userName) == 0 && strcmp(customer.pass,passWord) == 0){
				printf("\nLogged in Successfully");
				return;
			}
		}
		printf("\nUserName or PassWord invalid \n");
		printf("\nclick 1 to signup");
		scanf("%d",&choice);
		if(choice == 1){
			addUser(1);
		}
	}
	else {
		printf("\nInvalid Choice Try again :-");
		userLogin();
	}
}

void addUser(int c) {
	FILE *fp1,*fp2;
	fp1 = fopen("customers.dat","a");
	fp2 = fopen("admins.dat","a");
	if (c == 1){
		customer.id = 1001 + customersCount;
		printf("\nEnter the name :");
		scanf("%s",customer.name);
		printf("\nEnter the password : ");
		scanf("%d",customer.pass);
		printf("\nEnter the email :");
		scanf("%s",customer.email);
		printf("\nEnter the password : ");
		scanf("%d",customer.phone);
		customersCount++;
		fprintf(fp1,"%d %s %s %s %s\n",customer.id,customer.name,customer.pass,customer.email,customer.phone);
	}
	if (c == 0){
		admin.id = 1001 + adminsCount;
		printf("\nEnter the name :");
		scanf("%s",admin.name);
		printf("\nEnter the password : ");
		scanf("%d",admin.pass);
		printf("\nEnter the email :");
		scanf("%s",admin.email);
		printf("\nEnter the password : ");
		scanf("%d",admin.phone);
		adminsCount++;
		fprintf(fp2,"%d %s %s %s %s\n",admin.id,admin.name,admin.pass,admin.email,admin.phone);
	}
	fclose(fp1);
	fclose(fp2);
}

void adminAccess(){
	int choice;
	while(1){
		system("cls");
		printf("\n# # # # # # # WELCOME TO ADMIN PAGE # # # # # # #\n\n");
		printf("\n[1] Add Admin\n[2] remove customer\n[3] Add Customer\n[4] View Power Availability\n[5] Add Power\n[6] LOG-OUT\n[7] Exit\n");
		printf("\nEnter your choice : ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
					addUser(0);
					break;
			case 2: 
					deleteCustomer();
					break;
			case 3:
					addUser(1);
					break;
			case 4: 
					showPowerAvailable();
					break;
			case 5:
					AddPower();
					break;
			case 6: 
					menu();
					break;
			case 7:
					exit(0);
			default: printf("\nInvalid Choice");
			
		}
	}
}
void deleteCustomer() {
	FILE *fp,*fp1;
	fp = fopen("customers.dat","r");
	fp1 = fopen("temp.dat","w");
	int id;
	printf("\nEnter the Customer id you want to delete : ");
	scanf("%d",&id);
	while(fscanf(fp,"%d %s %s %s %s\n",&customer.id,customer.name,customer.pass,customer.email,customer.phone) != EOF){
		if(id!=customer.id){
			fprintf(fp1,"%d %s %s %s %s\n",customer.id,customer.name,customer.pass,customer.email,customer.phone);
		}
	}
	fclose(fp);
	fclose(fp1);
	remove("customers.dat");
	rename("temp.dat","customers.dat");
		
}

void showPowerAvailable() {
	printf("\n\n\n\t\t POWER AVAILABLE : %d\n\n",powerSource);
	system("pause");
	adminAccess();
}

void AddPower() {
	int add;
	printf("\nEnter the power source you want to add : ");
	scanf("%d",&add);
	powerSource += add;
	showPowerAvailable();
}
