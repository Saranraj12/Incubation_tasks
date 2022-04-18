// Write a c program to perform string manipulation by Using library function.

#include<stdio.h>
#include<stdlib.h>
#include <string.h>

void copy(char string[]);
void concat(char string[],char str[]);
void compare(char string[],char str[]);
void findLength(char str[]);
void reverse(char str[]);


int main() {
	int choice;
	char str[100],string[100];
	while(1){
		printf("\n[1] String Copy\n[2] String Concatenation\n[3] String Compare\n[4] String length\n[5] String reverse\n[6] Exit\n");
		printf("\nEnter your choice");
		scanf("%d",&choice);
		system("cls");
		switch(choice){
			case 1: copy(string);
					break;
			case 2: concat(str,string);
					break;
			case 3: compare(str,string);
					break;
			case 4: findLength(str);
					break;
			case 5: reverse(str);
					break;
			case 6: exit(0);
			
			default:printf("\nEnter the correct choice ---");
			
		}
	}
}

void copy(char string[]){
	printf("\n\nEnter the String want to copy : ");
	scanf("%s",string);
	char str[strlen(string)];
	printf("\nString copied to a new String.....\n");
	strcpy(str,string);
	printf("\nThe copied String is %s",string);
}

void concat(char string[],char str[]){
	printf("\n\nEnter the First String : ");
	scanf("%s",string);
	printf("\n\nEnter the second String : ");
	scanf("%s",str);
	strcat(string,str);
	printf("\nThe Concatenated String is %s",string);
}

void compare(char string[],char str[]){
	printf("\n\nEnter the First String : ");
	scanf("%s",string);
	printf("\n\nEnter the second String : ");
	scanf("%s",str);
	if(strcmp(string,str) == 0){
		printf("\nBoth Strings are Equal");
	}
	else
		printf("\nBoth Strings are not Equal");
}

void findLength(char str[]){
	printf("\n\nEnter the String : ");
	scanf("%s",str);
	printf("\nThe length of the string is %d\n",strlen(str));
}

void reverse(char str[]){
	printf("\n\nEnter the String : ");
	scanf("%s",str);
	strrev(str);
	printf("\nThe reverse of the string is %s\n",str);
}