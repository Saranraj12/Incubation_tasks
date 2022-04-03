// Nested Structures for Address For Employees and his/her DOJ

#include <stdio.h>
#include<stdlib.h>

struct Address {
	int house_no;
	char street_name[20];
	int pincode;
};

struct DOJ {
	int day;
	int month;
	int year;
};

struct Employee {
	int emp_id;
	char name[20];
	int salary;
	struct Address address;
	struct DOJ doj;
};

struct Employee emp[5];
static int id = -1;

void addDetails() {
	id++;
	printf("\nEnter the Employee Id : ");
	scanf("%d",&emp[id].emp_id);
	printf("\nEnter the employee name :");
	scanf("%s",emp[id].name);
	printf("\n Enter the salary of %s : ",emp[id].name);
	scanf("%d",&emp[id].salary);
	printf("\nEnter the Employee's house number :");
	scanf("%d",&emp[id].address.house_no);
	printf("\nEnter the Employee's street name : ");
	scanf("%s",emp[id].address.street_name);
	printf("\nEnter the pincode : ");
	scanf("%d",&emp[id].address.pincode);
	printf("\nEnter the Date of Joining\n");
	printf("Enter the Day:");
	scanf("%d",&emp[id].doj.day);
	printf("\nEnter the Month:");
	scanf("%d",&emp[id].doj.month);
	printf("\nEnter the Year:");
	scanf("%d",&emp[id].doj.year);
}

void showDetails() {
	if (id == -1) {
		printf("\nEmployee Details are not added\n");
		return;
	}
	printf("ID\tEMPLOYEE NAME\tEMPLOYEE SALARY\tADDRESS\t\tDOJ\n");
	for (int i = 0;i <= id;i++) {
		printf("%d\t%s\t\t%d\t%d %s %d\t",emp[id].emp_id,emp[id].name,emp[id].salary,emp[id].address.house_no,emp[id].address.street_name,emp[id].address.pincode);
		printf("%d/%d/%d\n",emp[id].doj.day,emp[id].doj.month,emp[id].doj.year);
	}
}

int main() {
	int choice;
	while(1) {
		printf("\n1 - Add Details of an Employee\n2 - Show Details of an Employee\n3 - Exit\n");
		printf("Enter your choice :");
		scanf("%d",&choice);
		switch(choice) {
			case 1:	printf("Add the Details of an Employee\n");
					addDetails();
					printf("Details Added Successfully\n");
					break;
			case 2: printf("Show the Details of an Employee\n");
					showDetails();
					break;
			case 3: exit(0);
			
			default: printf("\nEnter the number between 1 - 3\n");
		}
	}
}