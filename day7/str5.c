#include <stdio.h>

int main(){
	char name[30];
	scanf("%[A-Za-z]s", name);
	printf("%s", name);
	return 0;
}