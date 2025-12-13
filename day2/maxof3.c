//Program to find max of three values
#include <stdio.h>

int main(){
	int x, y, z;
	scanf("%d %d %d", &x, &y, &z);
	printf("%d", x>y&&x>z?x:y>z?y:z);
	return 0;
}
