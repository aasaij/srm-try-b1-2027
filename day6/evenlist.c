//Program to print even number in a list
#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int arr[n];
	//reading list of n integers
	for (int index = 0; index <n; scanf("%d", &arr[index++]));
	//printing even number in the given list
	for (int index = 0; index < n; index++)
		//checking whether the data is even or not
		if ( !(arr[index]%2)) printf("%4d", index[arr]);		
			
		
	return 0;
}