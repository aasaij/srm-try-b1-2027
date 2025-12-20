//Program to demonstrate union
#include <stdio.h>

union student{
	int rollno;
	char name[30];
	double cgpa;
};
int main(){
	union student s;
	printf("%d", sizeof(s));
	
	return 0;
}