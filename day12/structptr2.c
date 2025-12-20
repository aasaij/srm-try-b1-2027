//Program to demonstrate structure pointer
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//structure definition
typedef struct employee{
    int id; // 4    
    char name[33]; // 33
    float salary; // 4
}Employee;
int main(){
	Employee *sptr;
	sptr = (Employee *)malloc(sizeof(Employee));
    sptr->id= 101;
    strcpy(sptr->name,"Makizhtha");
    (*sptr).salary = 5000000;
    
    printf("Employee Name : %s\n", sptr->name);
    printf("Employee ID   : %d\n", sptr->id);
    printf("Salary        : %.2lf\n", (*sptr).salary);
	return 0;
}


