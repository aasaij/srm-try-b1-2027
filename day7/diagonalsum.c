//Program to sum diagonal element of matrix
#include <stdio.h>

int main(){
	int a[][4] = {1,2,3,4,
				  5,6,7,8,
				  3,4,5,6,
				  2,3,4,5};
	int sum =0, off_sum = 0, rowSize;
	rowSize =  sizeof(a)/sizeof(a[0]);
	
	for (int i = 0; i<rowSize; i++){
		sum = sum + a[i][i];
		off_sum = off_sum + a[i][4-i-1];
	}
	printf("Main : %d \t Off : %d", sum, off_sum);
	return 0;
}