// Queue Implementation using structure and pointers

#include <stdio.h>
#include <stdlib.h>

typedef struct Queue{
	int front;
	int rear;
	int size; 
	int data[10];
}Queue;

Queue* createQueue(int s) {
	Queue *q = (Queue*)malloc(s*sizeof(Queue));
	q->size = s;
	q->front = 0;
	q->rear = 0;
	return q;
}

int lengthOfQueue(Queue *Q){
	return (Q->rear - Q->front);
}
void insertValue(Queue* Q, int data) {
	if (Q->rear - Q->front == Q->size) {
		printf("Queue is FULL");
		return;
	}
	Q->data[Q->rear]= data;
	Q->rear++;
}

int pop(Queue* Q) {
	if(Q->rear == Q->front){
		printf("Queue is Empty");
	}
	else
		return Q->data[Q->front++];
}

void printQueue(Queue *Q) {
	int i;
	if(Q->rear == Q->front){
		printf("Queue is Empty");
		return;
	}
	for(i = Q->front;i < Q->rear;i++){
		printf("\nThe value is %d",Q->data[i]);
	}
}

int main() {
	int n,loop = 1;
	printf("Enter the queue size : ");
	scanf("%d",&n);
	Queue *Queue1 = createQueue(n);
	int choice,data;
	while(loop) {
		printf("\nSelect The operation :\n");
		printf("1.Insert\n2.Pop\n3.Print\n4.Length\n5.Exit\nEnter the choice : ");
		scanf("%d",&choice);
		switch(choice) {
			case 1:
				printf("\n Enter the element to insert :");
				scanf("%d",&data);
				insertValue(Queue1,data);
				break;
			case 2:
				printf("\nThe Popped Element is %d",pop(Queue1));
				break;
			case 3:
				printQueue(Queue1);
				break;
			case 4:
				printf("\nTotal Length of the Queue is %d",lengthOfQueue(Queue1));
				break;
			case 5:
				free(Queue1);
				exit(0);
			default: printf("Enter the number between 1 - 5");
		}
	}
}
