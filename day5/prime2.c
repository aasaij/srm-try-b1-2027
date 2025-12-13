//Program to check whether the given is prime or not
#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	//logic - 2
	if (n == 1)
		printf("Neither prime nor composite");
	else {
		for (int f = 2; f <=sqrt(n); f++)
			if ( n % f == 0){
				printf("Not Prime");
				return 0;
			}
		printf("Prime");
	}
	return 0;
}

//47 ==>  6 x 8 - 1
//11 ==> 6 x 2 -1
//19 ==> 6 x 3 + 1