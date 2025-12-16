//Program to check whether the given string is palindrome or not
#include <stdio.h>
#include <string.h>
int main(){
	char str[100];
	int len;
//	scanf("%s%n", str, &len);
	scanf("%s", str);
	len = strlen(str);
	for (int left = 0, right=len-1; left<right; left++, right--)
//		str[left] = str[left]+str[right] - (str[right]=str[left]);
	{
		char temp = str[left];
		str[left] = str[right];
		str[right] = temp;
	}

	puts(str);
	
	return 0;
}