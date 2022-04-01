// Movie ticket Application

#include <stdio.h>

struct Movie {
	int movie_id;
	char name[20];
	int duration;
};

struct Ticket {
	int id;
	char name[20];
	int count;
};

static int ticket_id = 0;
int total_tickets = 10,i;
struct Ticket tickets[5];
struct Movie movies[] = {{1001,"Star wars",156},{1002,"Iron man",148},{1003,"Thor",180},{1004,"RRR",170},{1005,"Beast",142}};
int movies_count = 5;

void swap(struct Ticket *a,struct Ticket *b) {
	struct Ticket temp = *a;
	*a = *b;
	*b = temp; 
}

int lengthOfString(char* str) {
	if (str[0] == '\0')
		return 0;
	return 1 + lengthOfString(str + 1);
}

void copy(char* original, char* copy) {
	int i;
	for (i = 0; i < lengthOfString(original);i++) 
		copy[i] = original[i];
}

void movieList() {
	printf("\nMovies are :");
	for (i = 0;i < movies_count;i++) {
		printf("\n%d - %s Duration: %d mins",movies[i].movie_id,movies[i].name,movies[i].duration);
	}
}

int validate(int c){
	return c <= total_tickets ? 1 : 0;
}
void available() {
	printf("\nAvailable tickets -> %d",total_tickets);
}

void bookTickets() {
	int choice, i,c,f = 0;
	while(1) {
		movieList();
		printf("\nEnter the movie ID to book : ");
		scanf("%d",&choice);
		if (1000 > choice && choice > 1006){
			printf("\nEnter the valid movie id ");
			continue;
		}
		for(i = 0;i < movies_count;i++) {
			if (choice == movies[i].movie_id) {
				copy(movies[i].name,tickets[ticket_id].name);
				printf("Enter the Number of tickets you want ");
				scanf("%d",&c);
				if (total_tickets == 0)
				{
					printf("\n******House Full******\n");
					f = 1;
					
				}
				else if (!validate(c)){
					available();
				}
				else {
					tickets[ticket_id].id = ticket_id;
					tickets[ticket_id].count = c;
					total_tickets -= tickets[ticket_id].count;
					ticket_id++;
					f = 1;
					printf("\n Booked Succesfully");
				}
				break;
			}
				
		}
		if (f == 1) break;
	}
}

void cancelTickets() {
	if (ticket_id == 0){
		printf("\nTickets booked is none");
		return;
	}
	int deleteId,f = 0;
	printf("\n Enter the ticket Id to delete ");
	scanf("%d",&deleteId);
	
	if(deleteId >= ticket_id) {
		printf("\n Ticket Id not available");
		return;
	}
	total_tickets += tickets[deleteId].count;
	swap(&tickets[deleteId],&tickets[ticket_id-1]);
	
	ticket_id--;
	printf("\nCancelled Successfully");
}

void showTickets() {
	printf("\nTicket Details");
	for(i = 0;i < ticket_id;i++) {
		printf("\nid - %d booked %d tickets for %s movie",tickets[i].id,tickets[i].count,tickets[i].name);
	}
	available();
}

int main() {
	int choice,loop = 1;
	printf("\n\n\n**********************Welcome to Ticket Booking System**********************\n\n\n");
	while(loop) {
		printf("\n1) BOOK\n2) CANCEL\n3) VIEW TICKETS\n4) EXIT\n");
		printf("Enter the choice : ");
		scanf("%d",&choice);
		switch(choice) {
			case 1:
					bookTickets();
					break;
			case 2:	cancelTickets();
					break;
			case 3: showTickets();
					break;
			case 4: printf("\nThank you for booking with us");
					loop = 0;
					break;
			default: printf("\nEnter the number between 1 - 4");
		}
		
	}
}
