#include <stdio.h>

int main(){
	for (int j = 1; j<=3; j++)
	for (int i = 1; i<=10; i++){
		printf("%d ", i);
		if (i%3)
			break;
		
	}
	return 0;
}