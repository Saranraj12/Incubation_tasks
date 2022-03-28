// Voting Application

#include <stdio.h>

void candidateNames() {
	printf("\nCandidate Names are \n\n");
	printf("Press '1' => 'Aggarwal'\nPress '2' => 'Viswanathan'\nPress '3' => 'Abdul'\nPress '4' => 'Venkatesh'\n");
}

void castVote(int* Counter){
	int choice;
	printf("\nEnter the Choice : ");
	scanf("%d",&choice);
	if(0 > choice || choice > 4) {
		printf("\nPlease Enter the number between 1-4\n");
		castVote(Counter);
		return;
	}
	Counter[choice - 1]++;
	printf("\nYour Vote has been Casted ....\n");
	
}

void showResult(int* Counter) 
{
	int len = 4;
	char candidates[4][100] = {"Aggarwal", "Viswanathan", "Abdul", "Venkatesh"};
	int highestVotes = Counter[0];
	int candidateNum = 0;
	for (int i = 1;i < len;i++) {
		if (Counter[i] > highestVotes) {
			highestVotes = Counter[i];
			candidateNum = i;
		}
	}
	printf("\n\n* * * * * * * %s has highest no. of votes -> %d * * * * * * *\n\n",candidates[candidateNum],highestVotes);
}

int main() {
	int ch;
	int Counter[4] = {0},f = 1;
	void (*function[2])(int*) = {castVote,showResult};
	printf("\n\t\t Welcome to Voting Application\n");
	while(f == 1) {
		printf("\nPress 1: To Cast Your Vote \n");
		printf("Press 2: Exit the Poll\n");
		printf("Press 3: Show Results\n");
		printf("Enter your Choice : \n");
		scanf("%d",&ch);
		switch(ch) {
			case 1: 
					candidateNames();
					(*function[0])(Counter);
					break;
			case 2:
					f = 0;
					break;
			case 3:
					(*function[1])(Counter);
					break;
			default: 
					printf("\nPress 1 or 2 or 3\n");					
		}
		
		
	}
}
