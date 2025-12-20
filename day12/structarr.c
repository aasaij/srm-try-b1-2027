#include <stdio.h>
#include <string.h>
//structure definition
struct employee{
    int id; // 4    
    char name[30]; // 30
    double salary; // 4
};
int main(){
    //structure variable declaration
    struct employee emp[10];
    emp[0].id = 11;
    strcpy(emp[0].name,"Dharani");
  	 emp[0].salary = 1000000;
    printf("Employee Name : %s\n", emp[0].name);
    printf("Employee ID   : %d\n", emp[0].id);
    printf("Salary        : %.2lf\n", emp[0].salary);

    return 00;
}