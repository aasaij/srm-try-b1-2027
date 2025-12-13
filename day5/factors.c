//Program to print factors of N
#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n); //10
	for (int f = 2; f<=n/2; f++){
		if (n%f==0)
			printf("%d ", f);
	}
	return 0;
}