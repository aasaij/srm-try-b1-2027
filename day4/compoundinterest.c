//Program to calculate COMPOUND interest
#include <stdio.h>
#include <math.h>
int main(){
	long long principal;
	double rate, years, interest;
	scanf("%lld", &principal);
	scanf("%lf", &years);
	scanf("%lf", &rate);
	interest = principal * pow(1 + rate / 100, years);
	printf("Compound Interest : %010.2lf", interest);
//	printf("%07d\n", 10);
//	printf("%07d\n", 123);
//	printf("%07d\n", 1);
//	printf("%07d\n", 1234);
//	printf("%07d\n", 12345);
//	printf("%07d\n", 123456789);
//	printf("%-7d\n", 10);
//	printf("%-7d\n", 123);
//	printf("%-7d\n", 1);
//	printf("%-7d\n", 1234);
//	printf("%-7d\n", 12345);
//	printf("%-7d\n", 123456789);
	
	return 0;
}