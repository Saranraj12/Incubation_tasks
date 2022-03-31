
#include<stdio.h>

void swap(int* a,int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void sort(int n,int processes[],int burst_time[], int arrival_time[]) {
	int i, j;
	for(i = 0;i < n;i++) {
		for(j = i + 1;j < n;j++) {
			if(arrival_time[i] > arrival_time[j]){
				swap(&arrival_time[i],&arrival_time[j]);
				swap(&processes[i],&processes[j]);
				swap(&burst_time[i],&burst_time[j]);
			}
		}
	}
}

void waitingTime(int processes[], int n, int burst_time[], int wait_time[])
{
	int i;
	wait_time[0] = 0;
	for (i = 1; i < n ; i++ )
		wait_time[i] = burst_time[i-1] + wait_time[i-1] ;
}

void turnAroundTime( int processes[], int n, int burst_time[], int wait_time[], int tat[])
{
	int i;
	for (i = 0; i < n ; i++)
		tat[i] = burst_time[i] + wait_time[i];
}

void avgTime( int processes[], int n, int burst_time[])
{
	int wait_time[n], tat[n], total_wt = 0, total_tat = 0,i;
	
	waitingTime(processes, n, burst_time, wait_time);

	turnAroundTime(processes, n, burst_time, wait_time, tat);

	printf("Processes Burst time Waiting time Turn around time\n");

	for (i=0; i<n; i++)
	{
		total_wt = total_wt + wait_time[i];
		total_tat = total_tat + tat[i];
		printf(" %d ",(i+1));
		printf("\t\t %d ", burst_time[i] );
		printf("\t\t %d",wait_time[i] );
		printf("\t\t %d\n",tat[i] );
	}
	printf("Average waiting time = %f\n",(float)total_wt / (float)n);
	printf("Average turn around time = %f ",(float)total_tat / (float)n);
}

int main()
{	
	int n,i;
	printf("Enter the number of processes : ");
	scanf("%d",&n);
	int processes[n],burst_time[n],arrival_time[n];
	
	for (i =0;i < n;i++){
		printf("\nEnter the processes time : ");
		scanf("%d",&processes[i]);
		printf("\nEnter the burst time : ");
		scanf("%d",&burst_time[i]);
		printf("\nEnter the arrival time : ");
		scanf("%d",&arrival_time[i]);
	}
	sort(n,processes, burst_time, arrival_time);

	avgTime(processes, n, burst_time);
	return 0;
}


