#include <stdio.h>
int main(){
	char *str = "Kaushika"; //immutable string
	str[0] = 'M';
	puts(str);
	return 0;
}