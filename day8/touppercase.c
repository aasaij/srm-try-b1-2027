//Program to convert a string into upper case
#include <stdio.h>
#include <ctype.h>
int main(){
	char str[100];
	scanf("%s", str);
	for(int i = 0; str[i]!=0; i++){
//		if (str[i]>='a' && str[i]<='z')
//			str[i]-=32;
		if (islower(str[i]))
			str[i] = toupper(str[i]);
	}
	puts(str);
	return 0;
}