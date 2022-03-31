// Singly Linked List

#include <stdio.h>
#include<stdlib.h>

typedef struct Node{
	int data;
	struct Node *next;
}Node;

Node *head = NULL,*ptr,*p;
void createNode(int data){
	if (head == NULL) {
		Node *node = (Node*)malloc(sizeof(Node));
		node->data = data;
		node->next = NULL;
		head = node;
	}
	else {
		ptr = head;
		while(ptr->next!=NULL) {
			ptr = ptr->next;
		}
		Node *node = (Node*)malloc(sizeof(Node));
		node->data = data;
		node->next = NULL;
		ptr->next = node;
	}
}

void deleteLast() {
	if (head == NULL)
		printf("\nLinked List is Empty\n");
	else {
		ptr = head;
		if(ptr->next == NULL){
			free(head);
			head = NULL;
			return;
		}
		while(ptr->next->next != NULL) {
			ptr = ptr->next;
		}
		free(ptr->next);
		ptr->next = NULL;
	}
}

void deleteElement() {
	int data1;
	printf("\nEnter the element to delete  : ");
	scanf("%d",&data1);
	if (head == NULL)
		printf("\nLinked List is Empty\n");
	else {
		ptr = head;
		if(ptr->data == data1){
			free(head);
			head = NULL;
			return;
		}
		while(ptr->next->next!= NULL) {
			if(ptr->next->data == data1) {
				p = ptr->next;
				ptr->next = ptr->next->next;
				break;
			}
			free(p);
			ptr = ptr->next;
		}
//		ptr->next = NULL;
		
	}
		
}


void printLL() {
	if(head == NULL)
		printf("\nLinked List is Empty\n");
	else {
		Node *ptr = head;
		while(ptr != NULL) {
			printf("%d->",ptr->data);
			ptr = ptr->next;
		}
	}
}

void search(int data) {
	int index = 0;
	if(head == NULL)
		printf("\nLinked List is Empty\n");
	else 
	{
		ptr = head;
		while(ptr->next!=NULL && ptr->data != data){
			ptr = ptr->next;
			index++;
		}
		if (ptr->data == data)
			printf("\nElement %d is found at index %d\n",data,index);
		else
			printf("Element not found");
	}
}

//void printReverse() {
//	if (head == NULL)
//		return;
//	printReverse()
//	
//}

int main() {
	int data,choice,loop = 1;
	printf("**********Linked List**********\n");
	while(loop) {
		printf("\nSelect Operation \n1.Create\n2.Delete\n3.Search\n4.Reverse\n5.Print\n6.exit\n");
		printf("Enter your Choice : ");
		scanf("%d",&choice);
		switch(choice) {
			case 1:
					printf("\nEnter the data to insert ");
					scanf("%d",&data);
					createNode(data);
					break;
			case 2:
					printf("\nAs per your choice Last element get removed");
					deleteElement();
					break;
			case 3:
					printf("\nEnter the data to search ");
					scanf("%d",&data);
					search(data);
					break;
			case 4:
					
					break;
			case 5: printf("\n the elements are  ");
					printLL();
					break;
			case 6: exit(0);
					
			default: printf("Enter the number b/w 1-5");
		}
	}
	
}
