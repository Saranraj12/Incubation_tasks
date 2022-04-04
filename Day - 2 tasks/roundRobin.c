// Implement Round Robin

#include <stdio.h> 

typedef struct roundRobin {
	int process_id;
	int arrival_time;
	int burst_time;
	int waiting_time;
	int completion_time;
	int turnAround_time;
}RRS;

RRS roundRobin[10];
struct RQ {
	int size;
	int ReadyQueue[10];
};


int main(){
	int  n;
	printf("\nEnter the number of processor : ");
	scanf("%d",&n);
	for (int i = 0;i < n;i++) {   
		roundRobin[i].process_id = i;
		printf("\nEnter the arrival time of process id - %d",i);
		scanf("%d",&roundRobin[i].arrival_time);
		printf("\nEnter the burst time of process id - %d",i);
		scanf("%d",&roundRobin[i].burst_time);
	}
}
