/*
Create a menu in which the following can be done.
1 - Display book information
2 - Add a new book
3 - Display all the books in the library of a particular author
4 - Display the number of books of a particular title
5 - Display the total number of books in the library
6 - Issue a book
(If we issue a book, then its number gets decreased by 1 and if we add a book,
its number gets increased by 1)
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#define SIZE 10

typedef struct book{
	int accessionNumber;
	char authorName[20];
	char title[20];
	bool flag;
}Book;

typedef struct bookdescription{
	char booktitle[20];
	char description[300];
}BD;


int available;
int count = 5;
Book books[SIZE] = {
		1001,"Amitav_Ghosh","The_Living_Mountain",true,
		1002,"Chidambaram","Signals_And_Systems",true,
		1003,"Saraswathi","Digial_Electronics",false,
		1004,"Kannan","Microprocessor",true,
		1005,"Guido_Van_Rossum","Python",false
	};
BD desc[SIZE] = {
		"The_Living_Mountain","The_Living_Mountain_is_a_new_story_by_Jnanpith_winner_and_internationally_renowned_author_Amitav_Ghosh",
		"Signals_And_Systems","Signals_and_Systems_is_an_introduction_to_analog_and_digital_signal_processing",
		"Digial_Electronics","Digital_electronics_is_a_field_of_electronics_involving_the_study_of_digital_signals_and_the_engineering_of_devices",
		"Microprocessor","Microprocessor_is_the_brain_of_computer_which_does_all_the_work",
		"Python","Python_is_an_interpreted_object_oriented_high_level_programming_language_with_dynamic_semantics_developed_by_Guido_van_Rossum"
	};
	
void displayBookInfo();
void addDetails();
void displaytitleCounts();
void issueBook();
void displayAuthorBooks();

void availableBooks() {
	available = 0;
	for(int i = 0;i < count;i++){
		if(books[i].flag) available++;
	}
}


void displayAll(){
	printf("\n\n\t\t____________________________________________________________________________________\n");
	printf("\t\t| Accession Number |     Author Name      |    Title             |   Availability   |\n");
	printf("\t\t|___________________________________________________________________________________|\n");
	for(int i = 0;i < count;i++){
		if(books[i].flag)
			printf("\t\t|  %-15d | %-20s | %-20s |      Available   |\n",books[i].accessionNumber,books[i].authorName,books[i].title);
		else
			printf("\t\t|  %-15d | %-20s | %-20s |    Not Available |\n",books[i].accessionNumber,books[i].authorName,books[i].title);
	}
	printf("\t\t|___________________________________________________________________________________|\n");
	
	printf("\n\tAvailable Books : %d\n",available);
}

void main() {
	int choice;
	while(1){
		printf("\n[1] Display Book Information\n[2] Add Details\n[3] Display all the books in the library of a particular author\n[4] Display the number of books of a particular title\n[5] Display the total number of books in the library\n[6] Issue a book\n[7] Exit");
		printf("\nEnter your choice : ");
		scanf("%d",&choice);
		switch(choice) {
			case 1: displayBookInfo();
					break;
			case 2: addDetails();
					break;
			case 3: displayAuthorBooks();
					break;
			case 4: displaytitleCounts();
					break;
			case 5: displayAll();
					break;
			case 6: issueBook();
					break;
			case 7: exit(0);
			
			default: printf("\nEnter the correct choice ....\n\n");
			
		}
	}                     
}

void displayBookInfo() {
	char title[20];
	printf("\nBOOK DETAILS : ");
	displayAll();
	printf("\nEnter the book title : ");
	scanf("%s",title);
	
	for(int i = 0;i < count;i++) {
		if (strcmp(books[i].title,title) == 0) {
			printf("\nBook Title : %s",title);
			printf("\n\nDescription :\n\n\t %s\n\n\n",desc[i].description);
			return;
		}
	}
	printf("\nYour requesting Book is not available .....");
	printf("\nTry After Sometime ....\n\n\n");
	
}

void addDetails() {
	books[count].accessionNumber = 1001 + count;
	printf("\nEnter the Book Title : ");
	scanf("%s",books[count].title);
	printf("\nEnter the Author Name : ");
	scanf("%s",books[count].authorName);
	strcpy(desc[count-1].booktitle,books[count-1].title);
	books[count].flag = true;
	printf("\nEnter some description about %s  (use _ instead of space)",books[count].title);
	scanf("%s",desc[count].description);
	count++;
	availableBooks();
	printf("\nSuccessfully Added");
}

void displayAuthorBooks() {
	char author[20];
	printf("\nBOOK DETAILS : ");
	displayAll();
	printf("\nEnter the author : ");
	scanf("%s",author);
	bool f = true;
	int c = 1;
	for(int i = 0;i < count;i++) {
		if (strcmp(books[i].authorName,author) == 0) {
			printf("%d. %s\n",c++,books[i].title);
			f = false;
		}
	}
	if(f){
		printf("\nYour requesting Author's  Book is not available .....");
		printf("\nTry After Sometime ....\n\n\n");
	}
}

void displaytitleCounts(){
	char title[20];
	printf("\nBOOK DETAILS : ");
	displayAll();
	printf("\nEnter the book title : ");
	scanf("%s",title);
	int count = 0;
	for(int i = 0;i < count;i++) {
		if (strcmp(books[i].title,title) == 0) {
			count++;
		}
	}
	if(count != 0) 
		printf("\nWe Have %d books in this title '%s'\n\n",count,title);
	else 
		printf("\nWe don't have any book in this title");
}

void issueBook() {
	char title[20];
	printf("\nBOOK DETAILS :\n");
	displayAll();
	printf("\nEnter the book title you want: ");
	scanf("%s",title);
	for(int i = 0;i < count;i++) {
		if (strcmp(books[i].title,title) == 0) {
			books[i].flag = false;
			availableBooks();
			return;
		}
	}
}