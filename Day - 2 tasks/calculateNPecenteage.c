// To calculate percentage of 'n' students using structure and sort them and display.
#include <stdio.h>
#include<stdlib.h>
typedef struct Student {
	int sid;
	char name[20];
	int sub1;
	int sub2;
	int sub3;
	float percentage;
}Student;

Student student[10];
static int id = 0;

void swap(Student *s1, Student *s2) {
	Student temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

void addDetails() {
	student[id].sid = 1000 + id;0
	printf("\nEnter the Student name :");
	scanf("%s",student[id].name);
	printf("\nEnter the sub1 mark :");
	scanf("%d",&student[id].sub1);
	printf("\nEnter the sub2 mark :");
	scanf("%d",&student[id].sub2);
	printf("\nEnter the sub3 mark :");
	scanf("%d",&student[id].sub3);
	
	student[id].percentage = ((float)(student[id].sub1 + student[id].sub2 + student[id].sub3)/300.0)*100;
	id++;
}

void showMarks() {
	if (id == 0) {
		printf("\nNo data found\n");
		return;
	}
	printf("Student ID |Student name   |  Subject 1  |   Subject 2   |  Subject  3   |  Percentage\n");
	for(int i = 0;i < id;i++) {
		printf("  %d    |%s       |      %d       |      %d       |      %d       |      %.2f       \n",student[i].sid,student[i].name,student[i].sub1,student[i].sub2,student[i].sub3,student[i].percentage);
	}
}

void sort() {
	for (int i = 0;i < id;i++) {
		for(int j = i + 1;j < id;j++) {
			if(student[i].percentage < student[j].percentage) {
				swap(&student[i],&student[j]);
			}
		}
	}
}


int main() {
	int choice;
	while(1) {
		printf("\n1 - Add Details\n2 - Show Marks\n3 - Sort and Display\n4 - Exit\n");
		printf("Enter your choice : ");
		scanf("%d",&choice);
		switch(choice) {
			case 1: printf("-----------------Add the Student Details Here-----------------\n");
					addDetails();
					printf("-----------------Succesfully Added the Details-----------------\n");
					break;
			case 2: printf("-----------------Student Marks-----------------\n");
					showMarks();
					printf("-----------------Shown Successfully-----------------\n");
					break;
			case 3:
					printf("\nSorting Started Successfully\n");
					sort();
					showMarks();
					break;
			case 4: exit(0);
			
			default: printf("\nEnter the number between 1 - 4");
			
		}
	}
}