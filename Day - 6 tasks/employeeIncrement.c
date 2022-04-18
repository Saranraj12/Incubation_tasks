/* Write a structure to store the names, salary and hours of work per day of 10
employees in a company. Write a program to increase the salary depending on
the number of hours of work per day as follows and then print the name of all
the employees along with their final salaries.
Hours of work per day 8 10 >=12
Increase in salary $50 $100 $150
*/

#include<stdio.h>
#define SIZE 10

typedef struct Employee{
	char name[20];
	float salary;
	int workHours;
}Employee;

void addDetails(Employee emp[]) {
	
	for(int i = 0;i < SIZE;i++){
		printf("\nEnter the Employee name : ");
		scanf("%s",emp[i].name);
		printf("\nEnter the Salary : ");
		scanf("%f",&emp[i].salary);
		printf("\nEnter the working hours of %s : ",emp[i].name);
		scanf("%d",&emp[i].workHours);
	}
	printf("\n Successfully Added The Details ");
}

void increment(Employee emp[]){
	for(int i = 0;i < SIZE;i++){
		if(emp[i].workHours >= 12){
			emp[i].salary += 150;
		}
		else if(emp[i].workHours == 10){
			emp[i].salary += 100;
		}
		else if(emp[i].workHours == 8){
			emp[i].salary += 50;
		}
	}
}

void print(Employee emp[]){
	printf("\n\n\t\t\t _______________________________________________\n");
	printf("\t\t\t|  Employee Name   |   Salary   |  workHours   |\n");
	printf("\t\t\t|______________________________________________|\n");
	for(int i = 0;i < SIZE;i++){
		 printf("\t\t\t|    %-14s|  %-8.2f  |    %-10d|\n",emp[i].name,emp[i].salary,emp[i].workHours);
	}
	printf("\t\t\t|______________________________________________|\n");
}

int main() {
	Employee emp[SIZE] = {
		"Saran", 12000.0, 8,
		"Raj", 40000.0, 10,
		"SRT", 29000.0, 12,
		"Selva", 32000.0, 10,
		"Kumar", 22000.0, 8,
		"Vignesh", 27000.0, 14,
		"Saravanan", 23000.0, 8,
		"Shabeer", 28000.0, 10,
		"Sudharshan", 9000.0, 14,
		"Syed", 11000.0, 10
	};
	printf("\n\t\t\tEMPLOYEE DETAILS : \n");
	print(emp);
	increment(emp);
	printf("\n\t\t\tAFTER INCREMENTING THE SALARIES\n");
	print(emp);

}

