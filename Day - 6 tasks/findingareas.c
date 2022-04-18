/*
Write a program by using a switch case. If a user enters 11 it will have area of
circle and when user enters 22 it will have area of rectangle and when user
enters 33 it will give area of square. When the user enters 44 it will give an
area of triangle
*/

#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#define PI 3.14
#define AOR(X,Y) X*Y
#define SQR(X) X*X

float areaOfCircle(int r) {
	return PI*r*r;
}

int main() {
	int choice,r,l,b;
	while(1){
		printf("\n11 - Area of Circle \n22 - Area of rectangle\n33 - Area of Square\n44 - Area of Triangle\n55 - Exit");
		printf("\nEnter your choice : ");
		scanf("%d",&choice);
		system("cls");
		switch(choice) {
			case 11: printf("\n\n\n\t\t********************** AREA OF CIRCLE **********************");
					 printf("\n\nEnter the radius of circle : ");
					 scanf("%d",&r);
					 printf("\nArea of Circle : %.2f",areaOfCircle(r));
					 break;
			case 22: printf("\n\n\n\t\t********************** AREA OF RECTANGLE **********************");
					 printf("\n\nEnter the length of rectangle : ");
					 scanf("%d",&l);
					 printf("\n\nEnter the breath of rectangle : ");
					 scanf("%d",&b);
					 printf("\nArea of Rectangle : %d",AOR(l,b));
					 break;
			case 33: printf("\n\n\n\t\t********************** AREA OF SQUARE **********************");
					 printf("\n\nEnter the side of square : ");
					 scanf("%d",&r);
					 printf("\nArea of Square : %d",SQR(r));
					 break;
			case 44: printf("\n\n\n\t\t********************** AREA OF TRIANGLE **********************");
					 printf("\n\nEnter the height of triangle : ");
					 scanf("%d",&l);
					 printf("\n\nEnter the width of triangle : ");
					 scanf("%d",&b);
					 printf("\nArea of Triangle : %d",AOR(l,b)/2);
					 break;
			case 55: exit(0);
			default: printf("\nEnter the correct choice to calculate -> \n");
			
		}
	}
}