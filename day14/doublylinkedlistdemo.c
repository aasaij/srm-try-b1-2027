//Program to demonstrate doubly linked list
#include <stdio.h>
typedef struct Node{
	//pointer used point the previous node
	struct Node *prev; 
	//integer used to store the value
	int data;
	//pointer used point the next node
	struct Node *next;
}node;
node *createNode(char data){
//	node *temp = (node*)malloc(sizeof(node));
	node *temp = (node*)calloc(1,sizeof(node));
	temp->element = data;
	return temp;
}

int main(){
	
	return 0;
}