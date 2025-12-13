//
//
//while(<condition>){
//	<statements>
//}

//Program to reverse a number
#include <stdio.h>

int main(){
	int n, reverse= 0;
	scanf("%d", &n);
	while(n!=0){
		int digit = n % 10;
		reverse = reverse * 10 + digit;
		n = n / 10; // n /=10;
	}	
	printf("%d\n", reverse);
	return 0;
}