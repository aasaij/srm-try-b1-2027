//Program to chech whether the given char is alphabet or not using function
#include <stdio.h>
#include <stdbool.h>
int main(){
	bool isAlpha(char);
	char ch;
	scanf("%c", &ch);
	if (isAlpha(ch))
		printf("Alphabet");
	else
		printf("Not an alphabet");	
	return 0;
}
//bool isAlpha(char ch){
//	if(ch>='A'&&ch<='Z'||ch>='a'&&ch<='z'){
//		return 1;
//	}
//	else{
//		return 0;
//	}
//}

bool isAlpha(char ch){
	return (ch>='A'&&ch<='Z'||ch>='a'&&ch<='z');
}