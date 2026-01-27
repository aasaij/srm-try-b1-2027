//Program to impplement binary tree traversal
#include <stdio.h>
#include <stdlib.h>
typedef struct BTNode{
	struct BTNode *left;
	int data;
	struct BTNode *right;
}btnode;
btnode* createNode(int data){
	btnode* newNode = (btnode*)calloc(1,sizeof(btnode));
	newNode->data = data;	
}
void inorder(btnode *root){
	if (root){
		inorder(root->left);
		printf("%d ", root->data);
		inorder(root->right);
	}
}
void preorder(btnode *root){
	if (root){
		printf("%d ", root->data);
		preorder(root->left);
		preorder(root->right);
	}
}
void postorder(btnode *root){
	if (root){		
		postorder(root->left);
		postorder(root->right);
		printf("%d ", root->data);
	}
}

int main(){
	btnode *root = NULL;
	root = createNode(1);
	root->left = createNode(2);
	root->right = createNode(3);
	root->left->left = createNode(4);
	root->left->right = createNode(5);
	root->right->left = createNode(6);
	root->right->right = createNode(7);
	printf("\nInorder : ");
	inorder(root);
	return 0;
}