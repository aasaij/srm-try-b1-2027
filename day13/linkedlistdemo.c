#include <stdio.h>
#include<stdlib.h>
//declaration of node
typedef struct Node {
	char element;
	struct Node *next;	
}node;

node *createNode(char data){
	node *temp = (node*)malloc(sizeof(node));
	temp->element = data;
	temp->next = NULL;
	return temp;
}
node *addFirst(node *root, char data){
	node* newNode = createNode(data);
	newNode->next = root;
	root = newNode;
	return root;
}
node* addLast(node* root, char data){
	node* newNode = createNode(data);
	if (!root)
		return newNode;
	node* temp;
	for(temp=root; temp->next!=NULL; temp= temp->next);
	temp->next = newNode;
	return root;		
}
addAt(node* root, int loc, char data){
	
}
void printList(node* list){
	printf("\n[");
	node* temp;
	for (temp = list;temp->next!=NULL; temp = temp->next)
		printf("'%c',", temp->element);
	printf("'%c']", temp->element);
}
int main(){
	node *root = NULL;
	root =createNode('A');	
	root->next = createNode('B');	
	root->next->next = createNode('C');		
	root->next->next->next = createNode('D');	
	printList(root);
	root = addFirst(root, 'J');
	root = addFirst(root, 'T');
	root = addFirst(root, 'A');
	printList(root);
	root = addLast(root, 'Y');
	root=addLast(root, 'Z');
	printList(root);
	return 0000;
}