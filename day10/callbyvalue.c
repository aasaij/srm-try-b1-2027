//Program to demonstrate call by value
#include <stdio.h>
void swap(int a, int b){
	a = a+b-(b=a);
}

int main(){
	int a =10, b = 20;
	printf("Before swapping \n");
	printf("A = %d\tB = %d", a, b);
	swap(a, b);
	printf("After swapping\n");
	printf("A = %d\tB = %d", a, b);
	return 0;
}