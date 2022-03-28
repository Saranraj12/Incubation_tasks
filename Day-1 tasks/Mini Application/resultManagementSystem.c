// Result Management System

#include <stdio.h>

struct student{
	int sid;
	char name[20];
	int english;
	int language;
	int maths;
	int totalMarks;
	float average;
};
int id = 0;
struct student record[5];

void swap(int* a, int* b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void sort(int *marks, int* rank) {
	int i,j;
	for(i = 0;i < id;i++){
		for(j = i+1;j < id;j++){
			if(marks[i]<marks[j]) {
				swap(&marks[i], &marks[j]);
				swap(&rank[i],&rank[j]);
			}
		}
	}
	
}

void addmarks() {
	record[id].sid = id;
	printf("\nEnter the student name : ");
	scanf("%s",&record[id].name);
	printf("\nEnter the English Mark : ");
	scanf("%d",&record[id].english);
	printf("\nEnter the Language name : ");
	scanf("%d",&record[id].language);
	printf("\nEnter the Maths name : ");
	scanf("%d",&record[id].maths);
	record[id].totalMarks = record[id].english + record[id].language + record[id].maths;
	record[id].average = record[id].totalMarks/3;
	id++;
}

void showMarks() {
	printf("Students Details Displayed  =>");
	int i;
	for(i = 0;i < id;i++) {
		printf("\n--------------------------------------------------------------");
		printf("\nStudent ID : %d",record[i].sid);
		printf("\nStudent Name : %s", record[i].name);
		printf("\nEnglish Mark : %d",record[i].english);
		printf("\nLanguage Name : %d", record[i].language);
		printf("\nMaths Mark : %d",record[i].maths);
		printf("\nTotal Marks : %d", record[i].totalMarks);
		printf("\nAverage : %f\n",record[i].average);
		printf("--------------------------------------------------------------\n\n");
	}
}

void result() {
	int arrangeMarks[10],i,j;
	int rank[id];
	for(i = 0;i < id;i++){
		arrangeMarks[i] = record[i].totalMarks;
		rank[i] = i;
	}
	sort(arrangeMarks,rank);
	printf("\n----------------Rank Details------------\n");
	for(j = 0;j < id;j++) {
		printf("\n--------------------------------------------------------------");
		printf("\nRank %d => %s \n Marks : %d\n",j+1,record[rank[j]].name,record[rank[j]].totalMarks);
		printf("\n--------------------------------------------------------------\n");
	}
}

int main() {
	int choice, f = 1;
	struct student record[5];
	printf("\n\n\t\t Result Management System \n");
	while(f == 1) {
		printf("\n\nPress - 1 => Add the Student Details and marks\n");
		printf("\nPress - 2 => Show the Student marks\n");
		printf("\nPress - 3 => Results\n");
		printf("\nPress - 4 => Exit \n");
		printf("Enter Your Choice (1-4) : ");
		scanf("%d",&choice);
		switch(choice) {
			case 1: addmarks();
					break;
			case 2: showMarks();
					break;
			case 3: result();
					break;
			case 4: f = 0;
					break;
			default: printf("\nPress numbers Only between 1-4");
		}
		
		
	}
	
}
