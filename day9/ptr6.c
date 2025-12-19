#include <stdio.h>

int main(){
	int x = 4294967295;
	char* ptr;
	ptr = &x;
	printf("%d", *ptr);
	return 0;
}