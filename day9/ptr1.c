#include <stdio.h>

int main(){
	int x;
	//pointer declaration
	int *ptr;
//	printf("%d %d %d", sizeof(ptr), sizeof(char*), sizeof(double*));
	ptr = &x;
	*ptr = 100;
	printf("%d", x);
	
	return 0;
}

//pointer declaration
//
//<data_type> *<variable_name>;