// C Program to Create Employee and Update it

#include<stdio.h>
#include<string.h>

struct Employee{
	int eid;
	char name[20];
	char designation[20];
	float salary;	
}emp;

void update() {
	FILE *fp,*fp1;
	fp = fopen("employee.dat","r");
	fp1 = fopen("temp.dat","w");
	int id,choice;
	float new_sal;
	char arr[20];
	printf("\nEnter the employee id to update : ");
	scanf("%d",&id);
	while(fscanf(fp,"%d %s %s %f",&emp.eid,emp.name,emp.designation,&emp.salary)!=EOF) {
		if(id == emp.eid){
			printf("\n[1] Name\n[2] Designation\n[3] Salary\n");
			printf("\nEnter your Choice : ");
			scanf("%d",&choice);
			switch(choice) {
				case 1:	printf("\nEnter the name you want to replace :");
						scanf("%s",arr);
						strcpy(emp.name,arr);
						printf("\nName updated");
						break;
				case 2: printf("\nEnter the designation you want to replace :");
						scanf("%s",arr);
						strcpy(emp.designation,arr);
						printf("\nDesignation updated");
						break;
				case 3: printf("\nEnter the salary you want to replace :");
						scanf("%f",&new_sal);
						emp.salary = new_sal;
						printf("\nSalary updated");
						break;
				default:
						printf("\nInvalid choice");
						return;
			}
			fprintf(fp1,"%d %s %s %.2f\n",emp.eid,emp.name,emp.designation,emp.salary);
		}
		else {
			fprintf(fp1,"%d %s %s %.2f\n",emp.eid,emp.name,emp.designation,emp.salary);
		}
	}
	fclose(fp);
	fclose(fp1);
	remove("employee.dat");
	rename("temp.dat","employee.dat");
}

void print() {
	FILE *fp =  fopen("employee.dat","r");
	printf("\n\n\n\t\t\t____________________________________________________________\n");
	printf("\t\t\t|   ID      |    Name      |   Designation    |      Salary    |\n");
	printf("\t\t\t|__________________________________________________________|\n");
	while(fscanf(fp,"%d %s %s %f",&emp.eid,emp.name,emp.designation,&emp.salary)!=EOF) {
		printf("\t\t\t|  %-8d |  %-10s  |   %-10s  |  %-10f   |\n",emp.eid,emp.name,emp.designation,emp.salary);
	}
	printf("\t\t\t|__________________________________________________________|\n");
	fclose(fp);
	
}

int main() {
	FILE *fp;
	fp = fopen("employee.dat","r");
//	int n;
//	printf("\nEnter the n value : ");
//	scanf("%d",&n);
//	int i = 0;
//	while(i < n) {
//		printf("\nEnter the employee id : ");
//		scanf("%d",&emp.eid);
//		printf("\nEnter the employee name : ");
//		scanf("%s",emp.name);
//		printf("\nEnter the employee designation : ");
//		scanf("%s",emp.designation);
//		printf("\nEnter the employee salary : ");
//		scanf("%f",&emp.salary);
//		
//		fprintf(fp,"%d %s %s %f\n",emp.eid,emp.name,emp.designation,emp.salary);
//		i++;
//	}
	fclose(fp);
	print();
	char ch;
	printf("\nIf u want to update a details of an Employee(Press - 'Y') : ");
	scanf("%c",&ch);
	if(ch == 'Y'){
		update();  
		print();
	}
}