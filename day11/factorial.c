//Program to find factorial of N using recursion
#include <stdio.h>
long long int fact(int x){
	if ( x == 1 || x == 0){
		printf("1"); 
		return 1;
	}
	else{
		printf("%dx", x);
		return x * fact(x-1);
	}
}
int main(){
	int n;
	scanf("%d", &n);
	printf("=%lld", fact(n));
	return 0;
}