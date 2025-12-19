//input:
//	education
//output
//	odicatuen
//
//input 2
//	test@123
//output
//	test@123
//Program to reverse vowels of given string
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
bool isVowel(char ch){
	return strchr("aeiouAEIOU", ch) != NULL;
}
//
//bool isConsonant(char ch){
//	return (ch>='A' && ch <='Z' || ch >='a' && ch<='z') && !isVowel(ch);
//}

int main(){
	char str[100];
	int len;
	scanf("%s", str);
	len = strlen(str);
	for(int i = 0m j = len-1; i<j; i++, j--){
		if (isVowel(str[i]) && isVowel(str[j]))
			str[i] = str[i]+str[j] - (str[j]=str[i]);
		else if (isVowel(str[i])) i--;
		else if (isVowel(str[j])) j++;
	}
	puts(str);
}