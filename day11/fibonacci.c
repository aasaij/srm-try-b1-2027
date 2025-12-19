//Program to print fibonacci series using recursion

#include <stdio.h>
int fib(int n){
	if (n<=1)
		return n;
	else
		return fib(n-1) + fib(n-2);
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%d", fib(n-1));
	
	return 0;
}