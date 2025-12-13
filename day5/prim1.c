//Program to check whether the given is prime or not
#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	//logic - 1
	if (n == 1)
		printf("Neither prime nor composite");
	else {
		for (int f = 2; f <=n/2; f++)
			if ( n % f == 0){
				printf("Not Prime");
				return 0;
			}
		printf("Prime");
	}
	return 0;
}