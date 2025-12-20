//Program to demonstrate structure pointer
#include <stdio.h>
#include <string.h>
//structure definition
typedef struct employee{
    int id; // 4    
    char name[33]; // 33
    float salary; // 4
}Employee;
int main(){
	Employee emp, *sptr;
    emp.id = 101;
    strcpy(emp.name,"Makizhtha");
    emp.salary = 5000000;
    sptr = &emp;
    
    printf("Employee Name : %s\n", sptr->name);
    printf("Employee ID   : %d\n", sptr->id);
    printf("Salary        : %.2lf\n", (*sptr).salary);
	return 0;
}


