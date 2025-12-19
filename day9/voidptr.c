#include <stdio.h>

int main(){
	void *ptr = NULL;
	int x = 10;
	float y = 10.5;
	char c = 'A';
	//void* is pointing to an integer
	ptr = &x;
	//casting void* into int*
	printf("%d\n", *(int*)ptr);
	//void* is pointing to float
	ptr = &y;
	printf("%f\n", *(float*)ptr);
	//void* is pointing to character
	ptr = &c;
	printf("%c\n", *(char*)ptr);
	return 0;
}