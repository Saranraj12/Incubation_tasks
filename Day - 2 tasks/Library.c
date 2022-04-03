/*
To create Library Book details using structure and use time_t for storing the issue date 
of a book and find out the fine amount if the book is not returned on the stipulated time. 
Calculate the days excluding the Saturday and Sunday.
*/

#include <stdio.h>

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
	
	id += 4
}

void issueBook() {
	printf("\nEnter the book name\n");
	scanf("%d",&books[id].bookName);
	// add code here
	printf("\nEnter your name :");
	scanf("%s",books[id].student.name);
	printf("\nEnter your phone number :");
	scanf("%s",books[id].student.phno);
	books[id].student.sid = 1000 + id;
	id++;
}

void returnBook() {
	
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
					printf("Don't Forget to Return Book within Due Date");
					break;
			case 2: printf("\n\nPlease Enter the Book details \n\n");
					returnBook();
					break;
			case 3: printf("\nBye\n");
					exit(0);
			default: printf("\nEnter the number between 1-3");
		}
	}
}