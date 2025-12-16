//Program to print the following patter
#include <stdio.h>
/*
5
5 12345
4 1234
3 123
2 12
1 1
*/
int main(){
	int n;
	scanf("%d", &n);

	for (int r = n; r>=1; r--){
		for (int c = 1; c<=r; c++)
			printf("%d", c);		
		printf("%*s", (n-r)*2, "");
		//		for (int c = 1; c<=r; c++)
		for (int c = r; c>=1; c--)
			printf("%d", c);
		printf("\n");
	}
	for (int r = 1; r<=n; r++){
		for (int c = 1; c<=r; c++)
			printf("%d", c);		
		printf("%*s", (n-r)*2, "");
		//		for (int c = 1; c<=r; c++)
		for (int c = r; c>=1; c--)
			printf("%d", c);
		printf("\n");
	}	
	return 0;
}