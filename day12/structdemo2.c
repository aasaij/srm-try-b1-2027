#include <stdio.h>
#include <string.h>
//structure definition
struct employee{
    int id; // 4    
    char name[30]; // 30
    double salary; // 8
};
int main(){
	struct employee emp = {1001, "Shalini", 1500000};  
	struct employee emp2 = {.name="Nixi"};
//    strcpy(e1.name,"Dharani");
//    e1.salary = 1000000;
    printf("Employee Name : %s\n", emp.name);
    printf("Employee ID   : %d\n", emp.id);
    printf("Salary        : %.2lf\n", emp.salary);
     printf("Employee Name : %s\n", emp2.name);
    printf("Employee ID   : %d\n", emp2.id);
    printf("Salary        : %.2lf\n", emp2.salary);
    return 00;
}