/*Write a program to take input from 5 subjects . find total and calculate
percent. On the basis of percent provide grade like IF Per > 80 “A+”
Per >= 65 and per <=80 “A”
Per > =50 and per <=65 “B”
Per >= 42 and per <=50 “C”
Per < 42 “Fail”
*/

#include<stdio.h>
#define N 5

float calculatePercent(int marks[], int (*sum)(int[])) {
	return (sum(marks)/500.0)*100;
}

int totalMarks(int marks[]){
	int total = 0;
	for(int i = 0;i < N;i++){
		total += marks[i];
	}
	return total;
}

int main() {
	int marks[N];
	for(int i = 0;i < N;i++) {
		printf("\nEnter the mark of subject %d : ",i+1);
		scanf("%d",&marks[i]);
	}
	int (*sum)(int[]) = totalMarks;
	
	float percent = calculatePercent(marks,sum);
	
	if(percent > 80.0)
		printf("Grade is A+");
	else if(percent >= 65)
		printf("Grade is A");
	else if(percent >= 50)
		printf("Grade is B");
	else if(percent >= 42)
		printf("Grade is C");
	else
		printf("Fail");	
}