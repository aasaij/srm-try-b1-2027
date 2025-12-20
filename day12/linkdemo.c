#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//structure definition
typedef struct employee{
    int id; // 4    
    char name[33]; // 33
    float salary; // 4
    struct employee *link;
}Employee;
int main(){
   	Employee e1, e2;
   	e1.link = &e2;
   	
    return 0;
}