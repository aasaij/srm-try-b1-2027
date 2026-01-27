//Program to im plement queue operations
#include <stdio.h>
#include <stdlib.h>
typedef struct Employee {
	int id;
	char name[30];
	double salary;
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

queue *createQueue(int max){
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
	return (st->capacity == st->rear+1 && st->front == 0) || st->rear + 1 == st->front;
}
//checking whether the stack is empty or not
boolean isEmpty(queue *st){
	return st->front == -1 && st->rear == -1;
}
boolean enqueue(queue *st, employee b){
	if (isFull(st))
		return false;
	if (st->front == -1) st->front = 0;
	st->rear = (st->rear+1) % st->capacity;
	st->employees[st->rear] = b;
	return true;	
}
//removing the top element and return the removed element
employee* dequeue(queue *st){
	if (isEmpty(st))
		return NULL;
	employee *emp = (employee*) malloc(sizeof(employee));
	emp = &st->employees[st->front];
	if (st->rear == st->front)
		st->rear = st->front = -1;
	else
		st->front = (st->front+1)%st->capacity;
	return emp;
}
//returning the top element in the stack
employee* front(queue *st){
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
employee getEmployee(){
	employee b;
	printf("Employee Id    : ");
	scanf("%d", &b.id);
	printf("Employee Name : ");
	scanf("\n%[^\n]s", b.name);
	printf("Employee salary : ");
	scanf("%lf", &b.salary);
	return b;
}
void printEmployee(employee b){
	printf("Employee Id     : %d\n", b.id);	
	printf("Employee Name   : %s\n", b.name);	
	printf("Employee Salary : %.2lf\n", b.salary);		
}
int queueSize(queue *st){
	return st->rear - st->front + 1;
}

int main(){
	queue *st = NULL;
	int size, choice;
	scanf("%d", &size);
	st = createQueue(size);
	while(true){
		printMenu();
		scanf("%d", &choice);
		switch(choice){
			case 1:
				if (!isFull(st)){
					if (enqueue(st, getEmployee()))
						printf("Enqueued...\n");
					else
						printf("Queue is full..\n");						
				}
				else
					printf("Queue is full..\n");				
				break;
			case 2:{
				employee *b = dequeue(st);
				if (b == NULL)
					printf("Queue is empty..\n");
				else
					printEmployee(*b);
				break;
			}
			case 3:{
				employee *b = front(st);
				if (b == NULL)
					printf("Queue is empty..\n");
				else
					printEmployee(*b);
				break;
			}
			case 4:
				printf("Thank you so much for being very very silent in the class!");
				return 0;				
		}		
	}
	return 0;
}