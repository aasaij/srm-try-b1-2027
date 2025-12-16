#include <stdio.h>

int main(){
	char str[100];
	int index = 0;
	while(1){
		char ch;
		ch = getchar();
		if (ch == '\n') break;
		str[index++] = ch;
	}
//	puts(str);
//	puts("Thank you so much for being very interactive!!!");
	printf(str);
	printf("Thank you so much for being very interactive!!!");

	return 0;
	
}