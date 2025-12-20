#include <stdio.h>
#include <string.h>
//structure definition
struct employee{
    int id; // 4    
    char name[33]; // 30
    float salary; // 4
};
int main(){
    //structure variable declaration
    struct employee e1, e2, e3;
//    e1.id = 11;
//    strcpy(e1.name,"Dharani");
//    e1.salary = 1000000;
//    printf("Employee Name : %s\n", e1.name);
//    printf("Employee ID   : %d\n", e1.id);
//    printf("Salary        : %.2lf\n", e1.salary);
//        printf("Employee Name : %s\n", e2.name);
//    printf("Employee ID   : %d\n", e2.id);
//    printf("Salary        : %.2lf\n", e2.salary);
	printf("%d", sizeof(struct employee));
	printf("\n%d", sizeof(e1));
    return 00;
}