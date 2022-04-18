// Leap year or not using decision

#include <stdio.h>
#include<windows.h>

int isLeapYear(int n){
	if (n%400 == 0)
		return 1;
	if (n%100 == 0)
		return 0;
	if (n%4 == 0)
		return 1;
	return 0;
}

int main() {
	int year;
	printf("\nEnter the year you want to check : ");
	scanf("%d", &year);
	system("cls");
	if(isLeapYear)
		printf("\"%d\" is a Leap Year",year);
	else 
		printf("\"%d\" is not a Leap Year",year);
}
