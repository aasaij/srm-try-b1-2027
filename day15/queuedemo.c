//Program to im plement queue operations
#include <stdio.h>
#include <stdlib.h>
typedef struct Employee {
	int id;
	char name[30];
	double price;
}employee;
typedef enum Boolean {false, true} boolean;
//typedef enum Boolean {true=1, false=} boolean;
typedef struct Queue {
	//to store the maximum capacity of the stack
	int capacity;
	//The rear points where the employee can be enqueued..
	int rear;
	//The front points where the employee can be dequeued.
	int front;
	//To store the address of where the books are stored
	employee *employees;
}queue;

stack *createQueue(int max){
	//allocating memory for the queue
	queue *temp = (queue*)malloc(sizeof(queue));
	//assigning length of the queue 
	temp->capacity = max;
	//Initializing the front and rear pointers as - 1. Indicates that the queue is empty
	temp->front = temp->rear= -1;
	//allocating memory to store <max> number of books
	temp->employees = (employee*)malloc(sizeof(employee)*max);
	return temp;
}
//checking whether the stack is full or not
boolean isFull(queue *st){
//	if (st->capacity == st->size+1)
//		return true;
//	return false;
	return st->capacity == st->rear+1;
}
//checking whether the stack is empty or not
boolean isEmpty(stack *st){
	return st->front == -1 && st->rear == -1;
}
boolean enqueue(queue *st, employee b){
	if (isFull(st))
		return false;
	st->employees[++(st->rear)] = b;
	return true;	
}
//removing the top element and return the removed element
book* dequeue(queue *st){
	if (isEmpty(st))
		return NULL;
	return &st->employees[(st->front)++];
}
//returning the top element in the stack
book* front(queue *st){
	if (isEmpty(st))
		return NULL;
	return &st->employees[st->front];
}
void printMenu(){
	printf("\nQueue operation Demo!\n");
	printf("*********************\n");
	printf("1. Enqueue\n");
	printf("2. Dequeue\n");
	printf("3. Display front\n");
	printf("4. Exit\n");
	printf("Enter your choice : ");
}
book getEmployee(){
	employee b;
	printf("Employee Id    : ");
	scanf("%d", &b.id);
	printf("Employee Name : ");
	scanf("\n%[^\n]s", b.name);
	printf("Employee salary : ");
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