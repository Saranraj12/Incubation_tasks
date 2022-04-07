// Binary Search Tree operations in C

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  int value;
  struct node *left;
  struct node *right;
} Node;


struct node *createNode(int data) {
  Node *temp = (struct node *)malloc(sizeof(struct node));
  temp->value = data;
  temp->left = temp->right = NULL;
  return temp;
}

void inorder(struct node *root) {
  if (root != NULL) {

    inorder(root->left);
    printf("%d -> ", root->value);
    inorder(root->right);
  }
}

struct node* insertNode(Node *node, int data) {
  if (node == NULL) 
  		return createNode(data);
  		
  if (data < node->value)
    node->left = insertNode(node->left, data);
  else
    node->right = insertNode(node->right, data);

  return node;
}

void printBT(Node *root, int gap)
{
    if (root == NULL)
        return;
    gap += 10;
    printBT(root->right, gap);
    printf("\n");
    for (int i = 5; i < gap; i++)
        printf(" ");
    printf("              %d\n", root->value);
    printBT(root->left, gap);
}


int main() {
  Node *root = NULL;
  int arr[] = {23, 2, 45,1, 8, 12, 10, 6, 43, 20, 18, 37, 30, 27, 11, 10},i;
	for(i = 0;i < 16;i++){
		root = insertNode(root,arr[i]);
	}

  printf("Inorder traversal: ");
  inorder(root);
  printBT(root,0);
}
