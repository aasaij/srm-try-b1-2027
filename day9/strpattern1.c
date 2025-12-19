#include <stdio.h>
#include <string.h>
int main(){
//	printf("%-*.*s", 20,10,"This is testing");
	char str[1000];
	int len;
	scanf("%s", str);
	len = strlen(str);
	for (int i = 1; i<=len; i++)
		printf("%-*.*s%*.*s\n",len,i, str, len,i, str);	
	for (int i = len; i>=1; i--)
		printf("%-*.*s%*.*s\n",len,i, str, len,i, str);
	return 0;
}
//input
//Balaji
//output
//Balaji
//Balaj
//Bala
//Bal
//Ba
//B