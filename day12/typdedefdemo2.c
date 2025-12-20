//Program to demonstrate typedef

#include <stdio.h>
#include <string.h>
//struct employee{
//    int id; // 4    
//    char name[30]; // 30
//    double salary; // 8
//};
//typedef struct employee Emp;

typedef struct employee{
    int id; // 4    
    char name[30]; // 30
    double salary; // 8
}Emp;
const int x = 100;
int main(){
	void printEmployee(Emp);
	Emp e;
    e.id = 11;
    strcpy(e.name,"Dharani");
    e.salary = 1000000;
	printEmployee(e)	;
	return 0;
}
void printEmployee(Emp e1){
    printf("Employee Name : %s\n", e1.name);
    printf("Employee ID   : %d\n", e1.id);
    printf("Salary        : %.2lf\n", e1.salary);
}