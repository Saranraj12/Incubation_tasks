// Write a program in C to read any Month number in integer and display Month name in. the word.(using switch case)

#include <stdio.h>

int main() {
	int n;
	printf("\nEnter the number between 1-12 : ");
	scanf("%d",&n);
	switch(n){
		case 1: printf("January");
				break;
		case 2: printf("February");
				break;
		case 3: printf("March");
				break;
		case 4: printf("April");
				break;
		case 5: printf("May");
				break;
		case 6: printf("June");
				break;
		case 7: printf("July");
				break;
		case 8: printf("August");
				break;
		case 9: printf("September");
				break;
		case 10: printf("October");
				break;
		case 11: printf("November");
				break;
		case 12: printf("December");
				break;
		default: printf("Press the numbers only between 1 to 12 to display the Month Name");
	}
}