#include<stdio.h>

#include<stdlib.h>
 
#define size 4 
 
int top=-1;
int stack[size];

int isFull() {
	return (top == size-1)? 1 : 0;
}
int isEmpty() {
	return (top == -1)? 1 : 0;
}

void push()
{
	int data;
	
	if(isFull())
		printf("\nStack is Full ");
	else
	{
		printf("\nEnter the element to insert:");
		scanf("%d",&data);
		top++;
		stack[top]=data;
	}
}
 
void pop()
{
	if(isEmpty())
		printf("\nStack is empty ");
	else
	{
		printf("\nPopped element:  %d",stack[top]);
		top--;
	}
}
 
void printStack()
{	
	int i;
	if(top==-1)
	{
		printf("\nStack is empty ");
	}
	else
	{
		printf("\nThe Stack Elements are: \n");
		for(i=top;i>=0;--i)
			printf("%d\n",stack[i]);
	}
}


int main()
{
	int choice,loop = 0;
	
	while(loop == 0)	
	{
		printf("\nOperations performed by Stack");
		printf("\n1.Push the element\n2.Pop the element\n3.Show\n4.End");
		printf("\n\nEnter the choice:");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1: push();
					break;
			case 2: pop();
					break;
			case 3: printStack();
					break;
			case 4: loop = 1;
					break;
			
			default: printf("\nEnter the number between 1-4\n");
		}
	}
}
 


