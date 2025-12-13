//Program to check whether the given character is vowel or consonant or not
#include <stdio.h>

int main(){
	char ch;
	scanf("%c", &ch);
	if (( ch >=65 && ch <=90) || (ch >=97 && ch <=122)){
		if ( ch =='A' || ch =='E' || ch =='I' || ch =='O' || ch == 'U' || 
			ch =='a' || ch =='e' || ch == 'i' || ch =='o' || ch == 'u')
				printf("1");
		else
			printf("0");
	}
	else
		printf("-1");
	
	return 0;
}