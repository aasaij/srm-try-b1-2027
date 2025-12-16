//Program to print the following pattern
#include <stdio.h>
/*
5
1 1
2 12
3 123
4 1234
5 12345
*/
int main(){
	int n;
	scanf("%d", &n);
	for (int r = 1; r<=n;r++){
		for(int c=1; c<=r; c++)
//			printf("%d", c);
//			printf("*");
//			printf("%c", 64+c);
			printf("?");
		printf("\n");
	}
	return 0;
}