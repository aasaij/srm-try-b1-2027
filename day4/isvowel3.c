//Program to check whether the given character is vowel or consonant or not
#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(){
	char ch;
	scanf("%c", &ch);
	if (isalpha(ch))
		printf("%d", strchr("aeuioAEIOU", ch)!=NULL?1:0);
	else;
		printf("-1");
	
	return 0;
}