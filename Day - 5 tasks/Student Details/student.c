// Program to read 10 student details from a file and write them into another file for those who have total marks>400 or Average>80

#include <stdio.h>

struct Student {
	int Rno;
	char name[50];
	char Course[50];
	int mark1;
	int mark2;
	int mark3;
	int mark4;
	int mark5;
	int total;
	float average;
}student[10];

int main() {
	FILE *fp1, *fp2;
	fp1 = fopen("students.bin","rb");
	fp2 = fopen("aboveAverage.bin","rb");
	
//	for (int i = 0;i <= 10;i++) {
//		student[i].Rno = i + 1;
//		printf("\nEnter Name :");
//		scanf("%s",student[i].name);
//		printf("\nEnter Course name :");
//		scanf("%s",student[i].Course);
//		printf("\nEnter Mark1 :");
//		scanf("%d",&student[i].mark1);
//		printf("\nEnter Mark2 :");
//		scanf("%d",&student[i].mark2);
//		printf("\nEnter Mark3 :");
//		scanf("%d",&student[i].mark3);
//		printf("\nEnter Mark4 :");
//		scanf("%d",&student[i].mark4);
//		printf("\nEnter Mark5 :");
//		scanf("%d",&student[i].mark5);
//		student[i].total = student[i].mark1 +student[i].mark2 +student[i].mark3 +student[i].mark4 +student[i].mark5;
//		student[i].average = (float)student[i].total/5.0;
//	}
//	fwrite(student,sizeof(struct Student),10,fp1);
//	fread(student,sizeof(struct Student),10,fp1);
//	for (int i = 0;i < 10;i++) {
//		if (student[i].total >= 400 || student[i].average >= 80.0) {
//			fwrite(&student[i],sizeof(struct Student),1,fp2);
//		}
//	}
	printf("ROLL NO     NAME           COURSE         MARK1         MARK2         MARK3         MARK4         MARK5         TOTAL         AVERAGE\n");
	while(!feof(fp2)){
		fread(student,sizeof(struct Student),1,fp2);
		printf("%-10d %-15s %-15s %-13d %-13d %-13d %-13d %-13d %-13d %-5f\n",student->Rno, student->name, student->Course,student->mark1,student->mark2,student->mark3,student->mark4, student->mark5, student->total, student->average);
	}
	
	fclose(fp1);                                

	fclose(fp2);
		
}