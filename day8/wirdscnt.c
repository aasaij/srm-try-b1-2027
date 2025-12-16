//Program to count the words in a sentance
#include <stdio.h>

int main(){
	char str[100];
	int words=0;
	gets(str);
	for (int i = 0; str[i];i++)
		if (str[i]==' ')
			words++;
	printf("%d", words+1);
	return 0;
}