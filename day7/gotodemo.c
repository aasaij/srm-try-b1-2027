#include <stdio.h>

int main(){
	test:
		goto exit;
		printf("You are very active in the class!");

		goto test;
	exit:
		printf("Thank you so much for being very interactive!");
	return 0;
}