//Program to demonstrate nested loop
#include <stdio.h>

int main(){
	for(int i =1; i<=5; i++){
		for(int j = 1; j<=5; j++)
			printf("Testing");	
		printf("\n");
	}
	return 0;
}