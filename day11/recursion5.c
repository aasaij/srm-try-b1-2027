//Program to print natural numbers upto N
#include <stdio.h>
void print(int n){
	if ( n<=0)
		return;
	else{
		print(n-1); // head recursion
		printf("%d ", n);	
		print(n-1)	; //tail recursion
	}
}

int main(){
	int n;
	scanf("%d", &n);
	//printing natural numbers using iteration
//	for (int i = 1; i<=n; i++)
//		printf("%d ", i);
	print(n);
	return 0;
}