//Program to check whether the given is prime or not
#include <stdio.h>
#include <math.h>
int main(){
	int n;
	scanf("%d", &n);
	//logic - 3
		if ( n > 0){
		if (n == 1)
			printf("Neither prime nor composite");
		else if (n > 3 &&(n % 2 == 0 || n % 3 == 0))
			printf("Not Prime");
		else {
			for (int f = 5; f <=sqrt(n); f+=6)
				if ( n % f == 0 || n % (f+2)==0){
					printf("Not Prime");
					return 0;
				}
			printf("Prime");
		}
	}
	return 0;
}

//47 ==>  6 x 8 - 1
//11 ==> 6 x 2 -1
//19 ==> 6 x 3 + 1

//5, 7, 11, 13, 17, 19, 23, 29, 31, .....


