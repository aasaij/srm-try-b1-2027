//Program to add two numbers
#include <stdio.h>

int main(){
	double num1, num2, sum;
	scanf("%lf %lf", &num1, &num2);
	sum = num1 + num2;
	long long int x  = (long long int)sum;
	if ( x == sum)
		printf("%lld", x);
	else
		printf("%.2lf", sum);
	
	return 0;
}