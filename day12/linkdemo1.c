//Program to demonstrate links
#include <stdio.h>
#include <stdlib.h>
typedef struct Node {
	char ch;
	struct Node *link;
}node;

int main(){
	node *x, *y;
	x = (node *)malloc(sizeof(node));
	y = (node *)malloc(sizeof(node));
	
	return 0;
}