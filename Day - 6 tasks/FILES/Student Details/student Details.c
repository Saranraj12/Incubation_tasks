// C program to write student record to a file

#include<stdio.h>

struct Student{
	int sid;
	char name[20];
	char dept[20];
	float cgpa;	
}s,l;

int main() {
	FILE *fp;
	fp = fopen("students.dat","r");
//	int n;
//	printf("\nEnter the n value : ");
//	scanf("%d",&n);
//	int i = 0;
//	while(i < n){
//		printf("\nEnter the student id : ");
//		scanf("%d",&s.sid);
//		printf("\nEnter the student name : ");
//		scanf("%s",s.name);
//		printf("\nEnter the student dept : ");
//		scanf("%s",s.dept);
//		printf("\nEnter the student cgpa : ");
//		scanf("%f",&s.cgpa);
//		
//		fprintf(fp,"%d %s %s %f\n",s.sid,s.name,s.dept,s.cgpa);
//		i++;
//	}
	printf("\n\n\n\t\t\t____________________________________________________________\n");
	printf("\t\t\t|   ID      |    Name      |    Dept       |       CGPA    |\n");
	printf("\t\t\t|__________________________________________________________|\n");
	while(fscanf(fp,"%d %s %s %f",&s.sid,s.name,s.dept,&s.cgpa)!=EOF) {
		printf("\t\t\t|  %-8d |  %-10s  |   %-10s  |  %-10f   |\n",s.sid,s.name,s.dept,s.cgpa);
	}
	printf("\t\t\t|__________________________________________________________|\n");
	
	fclose(fp);
}