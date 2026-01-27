//Program to im plement stack operations
#include <stdio.h>
#include <stdlib.h>
typedef struct Book {
	int id;
	char title[50];
	double price;
}book;
typedef enum Boolean {false, true} boolean;
//typedef enum Boolean {true=1, false=} boolean;
typedef struct Stack {
	//to store the maximum capacity of the stack
	int capacity;
	//The actual number of books stored
	int size;
	//To store the address of where the books are stored
	book *books;
}stack;

stack *createStack(int max){
	//allocating memory for the stack
	stack *temp = (stack*)malloc(sizeof(stack));
	//assigning capacity of the stack
	temp->capacity = max;
	//Resetting the actual size of stack
	temp->size = -1;
	//allocating memory to store <max> number of books
	temp->books = (book*)malloc(sizeof(book)*max);
	return temp;
}
//checking whether the stack is full or not
boolean isFull(stack *st){
//	if (st->capacity == st->size+1)
//		return true;
//	return false;
	return st->capacity == st->size+1;
}
//checking whether the stack is empty or not
boolean isEmpty(stack *st){
	return st->size == -1;
}
boolean push(stack *st, book b){
	if (isFull(st))
		return false;
	st->books[++(st->size)] = b;
	return true;	
}
//removing the top element and return the removed element
book* pop(stack *st){
	if (isEmpty(st))
		return NULL;
	return &st->books[(st->size)--];
}
//returning the top element in the stack
book* peek(stack *st){
	if (isEmpty(st))
		return NULL;
	return &st->books[st->size];
}
void printMenu(){
	printf("\nStack operation Demo!\n");
	printf("*********************\n");
	printf("1. Push\n");
	printf("2. Pop\n");
	printf("3. Display top\n");
	printf("4. Exit\n");
	printf("Enter your choice : ");
}
book getBook(){
	book b;
	printf("Book Id    : ");
	scanf("%d", &b.id);
	printf("Book Title : ");
	scanf("\n%[^\n]s", b.title);
	printf("Book Price : ");
	scanf("%lf", &b.price);
	return b;
}
void printBook(book b){
	printf("Book Id    : %d\n", b.id);	
	printf("Book Title : %s\n", b.title);	
	printf("Book Price : %.2lf\n", b.price);		
}
int stackSize(stack *st){
	return st->size+1;
}

int main(){
	stack *st = NULL;
	int size, choice;
	scanf("%d", &size);
	st = createStack(size);
	while(true){
		printMenu();
		scanf("%d", &choice);
		switch(choice){
			case 1:
				if (!isFull(st)){
					if (push(st, getBook()))
						printf("Pushed....\n");
					else
						printf("Stack overflow..\n");
				}
				break;
			case 2:{
				book *b = pop(st);
				if (b == NULL)
					printf("Stack underflow..\n");
				else
					printBook(*b);
				break;
			}
			case 3:{
				book *b = peek(st);
				if (b == NULL)
					printf("Stack underflow..\n");
				else
					printBook(*b);
				break;
			}
			case 4:
				printf("Thank you so much for being very very active in the class!");
				return 0;				
		}		
	}
	return 0;
}