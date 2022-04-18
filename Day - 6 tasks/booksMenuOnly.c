/*
Let us work on the menu of a library. Create a structure containing book
information like accession number, name of author, book title and flag to
know whether a book is issued or not.
*/

#include <stdio.h>
#include <stdbool.h>
#define SIZE 5

typedef struct book{
	int accessionNumber;
	char authorName[20];
	char title[20];
	bool flag;
}Book;

void menu(Book books[]){
	printf("\n\n\t\t____________________________________________________________________________________\n");
	printf("\t\t| Accession Number |     Author Name      |    Title             |   Availability   |\n");
	printf("\t\t|___________________________________________________________________________________|\n");
	for(int i = 0;i < SIZE;i++){
		if(books[i].flag)
			printf("\t\t|  %-15d | %-20s | %-20s |      Available   |\n",books[i].accessionNumber,books[i].authorName,books[i].title);
		else
			printf("\t\t|  %-15d | %-20s | %-20s |    Not Available |\n",books[i].accessionNumber,books[i].authorName,books[i].title);
	}
	printf("\t\t|___________________________________________________________________________________|\n");
}
void main() {
	
	Book books[5] ={1001,"Amitav_Ghosh","The_Living_Mountain",true,
					1002,"Chidambaram","Signals_And_Systems",true,
					1003,"Saraswathi","Digial_Electronics",false,
					1004,"Kannan","Microprocessor",true,
					1005,"Guido_Van_Rossum","Python",false
	};menu(books);                       
}