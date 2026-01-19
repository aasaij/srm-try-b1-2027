#include <stdio.h>
#include<stdlib.h>
//declaration of node
typedef struct Node {
	char element;
	struct Node *next;	
}node;

int main(){
	node *root = NULL;
	root =(node *) malloc(sizeof(node));
	root->element = 'A';
	root->next = (node *) malloc(sizeof(node));
	root->next->element = 'B';
	root->next->next = (node *) malloc(sizeof(node));
	root->next->next->element = 'C';
	root->next->next->next = NULL;
	return 0000;
}