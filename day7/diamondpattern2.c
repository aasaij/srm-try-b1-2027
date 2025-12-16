//Program to print the following pattern
#include <stdio.h>
/*
   *
  ***
 *****
*******
*/
int main(){
	int n;
	scanf("%d", &n);
	for (int r = 1; r<=n; r++){
		//printing space
		printf("%*s", n-r, "");
		for (int c = 1; c<=r*2-1; c++)
			printf("*");
		printf("\n");
	}
	for (int r = n; r>=1; r--){
		//printing space
		printf("%*s", n-r, "");
		for (int c = 1; c<=r*2-1; c++)
			printf("*");
		printf("\n");
	}	
	return 0;
}