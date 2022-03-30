//Binary Search Tree

#include <stdio.h>
#include <stdlib.h>
typedef struct Tree{
	struct Tree *left;
	int value;
	struct Tree *right;
}Tree;
Tree *root = NULL,*node;

void insertVal(int data,Tree *root) {
	if (root == NULL){
		node = (Tree*)malloc(sizeof(Tree));
		node->value = data;
		node->left = NULL;
		node->right = NULL;
		root = node;
	}
	else{
		if(root->value > data) {
			insertVal(data,root->left);
		}
		else {
			insertVal(data,root->right);
		}
	}	
}
void printTree() {
	printf("%d",root->value);
}
int main() {
	int arr[] = {23,2, 45, 1, 8, 12, 10, 6, 43, 20, 18, 37, 30, 27, 11, 10};
	for(int i = 0;i < 16;i++) {
		insertVal(arr[i],root);
	}
	printTree();
	return 0;
}