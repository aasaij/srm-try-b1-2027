//Program to print the following pattern
#include <stdio.h>
/*
5
1     1
2    12
3   123
4  1234
5 12345
*/
int main(){
	int n;
	scanf("%d", &n);
	for (int r = 1; r<=n;r++){
		//printing space
//		for (int c = 1; c<=n-r;c++)
//			printf(" ");
		printf("%*s", n-r,""); // %4s
		for(int c=1; c<=r; c++)
//			printf("%d", c);
			printf("*");
		printf("\n");
	}
	return 0;
}