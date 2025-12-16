#include <stdio.h>

int main(){
	char name[30];
	scanf("%[^\n]s", name);
	printf("%s", name);
	return 0;
}