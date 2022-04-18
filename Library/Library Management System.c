// Library Management System

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

struct book{
	int id,count;
	char name[20],author[20];
}Book;

struct user{
	int id;
	char name[20],pass[15],email[20],phone[12];
}User;

char liberian_userName[] = "admin";
char liberian_password[] = "password";
static int userCount;

void login();
void getPassword(char password[]);
void user_login();
void liberian_login();

int main() {
	
	printf("\n\t\t\t###################################################################\n");
	printf("\t\t\t#                                                                  #\n");
	printf("\t\t\t#                 LIBRARY MANAGEMENT SYSTEM                        #\n");
	printf("\t\t\t#                                                                  #\n");
	printf("\t\t\t###################################################################\n");
	login();
}
void login() {
	int choice;
	while(1){
		printf("\n################## LOGIN PAGE ########################\n");
		printf("\n\n\t\t[1] Liberian Login\n\t\t[2] User Login\n\t\t[3] Exit\nEnter your choice :");
		scanf("%d",&choice);
		if(choice == 1){
			liberian_login();
		}
		else if(choice == 2){
			user_login();
		}
		else if(choice == 3)
			exit(EXIT_SUCCESS);
		else{
			printf("\nInvalid choice\n");
		}
	}
}
void liberian_login(){
	char userName[20],password[15],ch;
	printf("\n\t\t##################### LIBERIAN LOGIN #####################\n");
	printf("\n\nEnter the userName : ");
	scanf("%s",userName);
	getPassword(password);
	if(strcmp(liberian_userName,userName)==0 && strcmp(password, liberian_password)==0) {
		printf("\nLogged In Successfully");
	}
	
}
void getPassword(char password[]){
	char ch;
	int i;
	printf("\n\nEnter the password : ");
	for(
	i  = 0;i < 15;i++){
		ch = getch();
		if(ch!=13){
			password[i] = ch;
			printf("*");
		}
		else{
			if(i >= 8) {
				break;
			}
			else{
				printf("\nYour password is too short atleast 8 characters required ...\n");
				getPassword(password);
			}
		}
	}
	password[i] = '\0';
}
void sign_up() {
	FILE *fp = fopen("user.dat","a");
	User.id = 1000 + userCount;
	printf("\nEnter the User Name : ");
	scanf("%s",User.name);
	printf("\nEnter the password : ");
	getPassword(User.pass);
	printf("\nEnter the Email :");
	scanf("%s",User.email);
	printf("\nEnter the Phone :");
	scanf("%s",User.phone);
	fwrite(&User,sizeof(User),1,fp);
	fclose(fp);
}

void user_login() {
	char userName[20],password[15],ch;
	int choice;
	printf("\n\t\t##################### USER LOGIN #####################\n");
	printf("\n[1] SIGN-UP\n[2] LOGIN\n");
	scanf("%d",&choice);
	if(choice == 1){
		sign_up();
	}
	else if(choice == 2){
		FILE *fp = fopen("user.dat","r");
		printf("\n\nEnter the userName : ");
		scanf("%s",userName);
		getPassword(password);
		while(!feof(fp)){
			fread(&User,sizeof(User),1,fp);
			if(strcmp(User.name,userName)== 0 && strcmp(User.pass,password) == 0){
				printf("\nUser Logged in successfully");
			}
		}
	}
	
}
