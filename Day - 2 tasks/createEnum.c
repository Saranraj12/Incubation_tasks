// Create an enum data-type for referring the designation of the employees( Level-1, Level-2, Level-3, Level-4)

#include <stdio.h>

typedef enum Level {
	Level1 = 1,
	Level2,
	Level3,
	Level4
}Level;

typedef struct {
	int emp_id;
	char emp_name[20];
	Level designation;
}Employee;

Employee emp[5] = {
	{1001,"Employee 1",Level1},
	{1002,"Employee 2",Level4},
	{1003,"Employee 3",Level3},
	{1004,"Employee 4",Level2},
	{1005,"Employee 5",Level1}
};

int main() {
	printf("\nEMPLOYEE DETAILS\n");
	printf("-----------------------------------------------\n");
	printf("| EMP ID  |  Employee Name  |  Employee Level |\n");
	printf("-----------------------------------------------\n");
	for (int i = 0;i < 5;i++)
		printf("|  %d   |   %s    |        %d        |\n",emp[i].emp_id,emp[i].emp_name,emp[i].designation);
	printf("-----------------------------------------------\n");
	return 0;
}