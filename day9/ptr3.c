#include <stdio.h>

int main(){
	int x;
	//pointer declaration
	int *ptr;
	ptr = &x;
	*ptr++ = 100;
	x++;
	printf("%d\n", x);
	printf("%d\n", *ptr);
	printf("%d\n", *(&x));
	return 0;
}