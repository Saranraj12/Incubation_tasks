/*
To create Library Book details using structure and use time_t for storing the issue date 
of a book and find out the fine amount if the book is not returned on the stipulated time. 
Calculate the days excluding the Saturday and Sunday.
*/

#include <stdio.h>
#include <stdlib.h>

struct Student {
	int sid;
	char name[20];
	char phno[15];	
};

struct Date {
	int day;
	int month;
	int year;
};

typedef struct LibraryBook {
	int book_id;
	char bookName[20];
	struct Date issueDate;
	struct Date dueDate;
	struct Student student;
	
}Book;

Book books[10];
static int id = 0;

int lengthOfString(char* str) {
	if (str[0] == '\0')
		return 0;
	return 1 + lengthOfString(str + 1);
}

void copyString(char* copy, char* original) {
	int i;
	for (i = 0; i < lengthOfString(original);i++) 
		copy[i] = original[i];
	copy[i] = '\0'; // Explicitly assigning Null
}

void initialize() {
	
	books[0].book_id = 0;
	books[1].book_id = 1;
	books[2].book_id = 2;
	books[3].book_id = 3;
	
	copyString(books[0].bookName, "Story Book");
	books[0].issueDate.day = 12, books[0].issueDate.month =10, books[0].issueDate.year =2021;
	books[0].dueDate.day = 10, books[0].dueDate.month =12, books[0].dueDate.year =2021;
	copyString(books[0].student.name, "Saran raj");
	copyString(books[0].student.phno ,"9876543210");
	books[0].student.sid = 1001;
	
	copyString(books[1].bookName, "Interesting Facts");
	books[1].issueDate.day = 21, books[1].issueDate.month =10, books[1].issueDate.year =2021;
	books[1].dueDate.day = 14, books[1].dueDate.month =12, books[1].dueDate.year =2021;
	copyString(books[1].student.name, "Mahesh");
	copyString(books[1].student.phno ,"9876543012");
	books[1].student.sid = 1002;
	
	copyString(books[2].bookName, "Comics");
	books[2].issueDate.day = 14, books[2].issueDate.month =01, books[2].issueDate.year =2022;
	books[2].dueDate.day = 12, books[2].dueDate.month =03, books[2].dueDate.year =2022;
	copyString(books[2].student.name, "Selva Kumar");
	copyString(books[2].student.phno ,"8796543210");
	books[2].student.sid = 1003;
	
	copyString(books[3].bookName, "Study Book");
	books[3].issueDate.day = 11, books[3].issueDate.month =03, books[3].issueDate.year =2022;
	books[3].dueDate.day = 10, books[3].dueDate.month =04, books[3].dueDate.year =2022;
	copyString(books[3].student.name, "Veera Ragavan");
	copyString(books[3].student.phno ,"7986543210");
	books[3].student.sid = 1004;
	
	id += 4;
}

void timeAllocate(int id) {
	if (books[id].issueDate.day > 25 ) {
		books[id].dueDate.day = 30 - books[id].issueDate.day + 5;
		if (books[id].issueDate.month == 12) {
			books[id].dueDate.month = 1;
			books[id].dueDate.year =  books[id].issueDate.year + 1;
		}
		else{
			books[id].dueDate.month = books[id].issueDate.month + 1;
			books[id].dueDate.year =  books[id].issueDate.year;
		}
	}
	else {
		books[id].dueDate.day = books[id].issueDate.day + 5;
		books[id].dueDate.month = books[id].issueDate.month;
		books[id].dueDate.year = books[id].issueDate.year;
	}
		
	
	printf("\n\n\nYour Due Date : %d/%d/%d \n\n",books[id].dueDate.day,books[id].dueDate.month,books[id].dueDate.year);
}

void issueBook() {
	books[id].book_id = id;
	printf("\nEnter the book name\n");
	scanf("%s",books[id].bookName);
	printf("\nEnter today date : ");
	scanf("%d",&books[id].issueDate.day);
	scanf("%d",&books[id].issueDate.month);
	scanf("%d",&books[id].issueDate.year);
	printf("\nEnter your name :");
	scanf("%s",books[id].student.name);
	printf("\nEnter your phone number :");
	scanf("%s",books[id].student.phno);
	books[id].student.sid = 1000 + id;
	timeAllocate(id);
	printf("\nPlease Note down your Book ID : %d\n",books[id].book_id);
	id++;
}


int fineCalculate(int dd1,int mm1,int yyyy1, int dd2,int mm2,int yyyy2) {
	

	int totaldays1 = (yyyy1*365)+(mm1*30) +(dd1);
	int totaldays2 = (yyyy2*365)+(mm2*30) +(dd2);
	if (totaldays2 > totaldays1) {
		if (totaldays2 - totaldays1 < 7)
			return totaldays2 - totaldays1;
		return (totaldays2 - totaldays1) * 5/7;
	}
	return 0;
}

void returnBook() {
	int dd,mm,yyyy,bid,fineCost = 10;
	printf("\nEnter the today date :");
	scanf("%d %d %d",&dd,&mm,&yyyy);
	printf("\nEnter the book id : ");
	scanf("%d",&bid);
	if(0>bid || bid > id) {
		printf("\nEnter the correct book id :(");
		returnBook();
		return;
	}
	int fine = fineCalculate(books[bid].dueDate.day,books[bid].dueDate.month,books[bid].dueDate.year,dd,mm,yyyy);
	if (fine != 0)
		printf("you need to pay the fine of %d",fine*fineCost);
	printf("\nThanks for return the book");
}

void main() {
	initialize();
	int choice;
	while(1) {
		printf("\n1 - Issuing Book\n2 - Return Book\n3 - Exit\n");
		printf("Enter Your Choice : ");
		scanf("%d",&choice);
		switch(choice) {
			case 1: printf("\n\nPlease Enter the Book details \n\n");
					issueBook();
					printf("\n\nDon't Forget to Return Book within Due Date");
					break;
			case 2: printf("\n\nPlease Enter the Book details \n\n");
					returnBook();
					break;
			case 3: 
					exit(0);
			default: printf("\nEnter the number between 1-3");
		}
	}
}
