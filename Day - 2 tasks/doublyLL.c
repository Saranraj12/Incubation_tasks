// Doubly Linked List

#include <stdio.h>
#include<stdlib.h>

typedef struct Node{
	struct Node *left;
	int data;
	struct Node *right;
}Node;

Node *head = NULL,*ptr;
void createNode(int data){
	if (head == NULL) {
		Node *node = (Node*)malloc(sizeof(Node));
		node->left = NULL;
		node->data = data;
		node->right = NULL;
		head = node;
	}
	else {
		ptr = head;
		while(ptr->right!=NULL) {
			ptr = ptr->right;
		}
		Node *node = (Node*)malloc(sizeof(Node));
		node->left = ptr;
		node->data = data;
		node->right = NULL;
		ptr->right = node;
	}
}

void deleteLast() {
	if (head == NULL)
		printf("\nLinked List is Empty\n");
	else {
		ptr = head;
		if(ptr->right == NULL){
			free(head);
			head = NULL;
			return;
		}
		while(ptr->right->right != NULL) {
			ptr = ptr->right;
		}
		free(ptr->right);
		ptr->right = NULL;
	}
}

void printLL() {
	if(head == NULL)
		printf("\nLinked List is Empty\n");
	else {
		Node *ptr = head;
		while(ptr != NULL) {
			printf("%d->",ptr->data);
			ptr = ptr->right;
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
		while(ptr->right!=NULL && ptr->data != data){
			ptr = ptr->right;
			index++;
		}
		if (ptr->data == data)
			printf("\nElement %d is found at index %d\n",data,index);
		else
			printf("Element not found");
	}
}

void printReverse() {
	if (head == NULL){
		printf("Linked List is Empty");
	}
	else {
		ptr = head;
		while (ptr->right!=NULL){
			ptr = ptr->right;
		}
		while (ptr!=NULL){
			printf("%d->",ptr->data);
			ptr = ptr->left;
			 
		}
	}	
}

int main() {
	int data,choice,loop = 1;
	printf("**********Doubly Linked List**********\n");
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
					deleteLast();
					break;
			case 3:
					printf("\nEnter the data to search ");
					scanf("%d",&data);
					search(data);
					break;
			case 4:
					printReverse();
					break;
			case 5: printf("\n the elements are  ");
					printLL();
					break;
			case 6: exit(0);
					
			default: printf("Enter the number b/w 1-5");
		}
	}
	
}
