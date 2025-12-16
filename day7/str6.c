//Program to print string 
#include <stdio.h>

int main(){
	char name[30];
	scanf("%29s", name);
	for (int i = 0; name[i]!='\0'; i++)
		printf("%c", name[i]);
	return 0;
}