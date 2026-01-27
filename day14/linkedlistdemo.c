#include <stdio.h>
#include<stdlib.h>
//declaration of node
typedef struct Node {
	char element;
	struct Node *next;	
}node;
typedef enum Boolean{false, true} boolean;

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
node* addAt(node* root, int loc, char data){
	if ( loc == 0 || loc == 1)
		return addFirst(root, data);
	//Checking the following conditions
	// 1. location should be > 1
	// 2. List should not empty
	// 3. List should not contain only one node
	if (loc > 1 && root != NULL && root->next!=NULL){		
		node *temp=root;
		for (int i = 2;i<loc && temp->next; i++ )
			temp = temp->next;
		if ( temp && temp->next){
			node *newNode = createNode(data);
			newNode->next = temp->next;
			temp->next = newNode;
		}
	}
	return root;
}
void printList(node* list){
	printf("\n[");
	node* temp;
	for (temp = list;temp->next!=NULL; temp = temp->next)
		printf("'%c',", temp->element);
	printf("'%c']", temp->element);
}
node* deleteFirst(node* list){	
	if (list){
		//list is not empty
		node* temp = list;
		list=list->next;
		free(temp)	;
	}
	return list;
}
node* deleteLast(node* list){
	if (list){
		//List is not empty
		//check whether the list contains only one node
		if (!list->next){
			node* temp = list;
			list = NULL;
			free(temp);
		}
		else{
			//the list contains more then one node
			node* temp;
			//moving the temp pointer to the last node but second node
			for (temp = list; temp->next->next!=NULL;temp=temp->next);
			//removing the last node
			free(temp->next);
			temp->next = NULL;
		}
	}
	return list;
}
node* deleteAt(node* list, int loc){
	if (loc==0 ||loc==1 )
		return deleteFirst(list);
	//Checking the following conditions
	//1. The location should be > 1
	//2. The list should not be empty
	//3. The list should contain more than one node
	if (loc>1 && list!=NULL && list->next!=NULL){
		node* temp = list;
		for (int i = 2; i<loc && temp!=NULL; i++)
			temp = temp->next;
		//checking the location is lesser than or equal to length of list
		if (temp != NULL && temp->next!=NULL){
			node* temp1 = temp->next;
			temp->next = temp1->next;
			free(temp1);
		}
	}
	return list;
}
boolean search(node* list, char searchElement){
	if (list){
		//List is not empty
		for (node* temp = list; temp;temp=temp->next){
			if (temp->element == searchElement)
				return true;
		}
	}
	return false;
}
int length(node* list){
	int cnt = 0;
	if(list){
		for (node* temp = list; temp; temp=temp->next,cnt++);
	}
	return cnt;
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
	root = addAt(root, 1, 'M');	
	printList(root);
	root = addAt(root, 9, 'E');	
	printList(root);
	root = addAt(root, 12, 'E');
	printList(root);
	root = deleteFirst(root);
	printList(root);
	root = deleteLast(root);
	printList(root);
	root = deleteAt(root, 7);
	printList(root);
	root = deleteAt(root, 17);
	printList(root);	
	printf("%s", search(root, 'M')?"Found":"Not Found!");
	printf("\n%d", length(root));
	return 0000;
}