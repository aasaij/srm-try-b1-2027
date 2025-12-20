#include <stdio.h>
#include <string.h>
//structure with in structure
//structure definition
struct employee{
    int id; // 4    
    char name[30]; // 30
    double salary; // 4
    struct {
    	int dd;
    	int mm;
    	int yy;
	} doj;
};
int main(){
	struct employee emp;
	emp.id = 101;
	strcpy(emp.name, "Varsha");
	emp.salary = 5000000;
	emp.doj.dd = 8;
	emp.doj.mm = 7;
	emp.doj.yy= 2027;
	printf("Employee Name   : %s\n", emp.name);
	printf("Employee ID     : %d\n", emp.id);
	printf("Salary          : %.2lf\n", emp.salary);
	printf("Date of Joining : %d/%d/%d\n", emp.doj.dd, emp.doj.mm, emp.doj.yy);
	
    return 00;
}