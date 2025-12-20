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
    int n = 3;
    sptr = (Employee *)malloc(sizeof(Employee) * n);
    sptr[0].id= 101;
    strcpy(sptr[0].name,"Makizhtha");
    sptr[0].salary = 5000000;
    
    printf("Employee Name : %s\n", sptr[0].name);
    printf("Employee ID   : %d\n", sptr[0].id);
    printf("Salary        : %.2lf\n", sptr[0].salary);
    return 0;
}