//Program to reverse the orginal array
#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int arr[n], brr[n];
	//reading list of n integers
	for (int index = 0; index <n; scanf("%d", &arr[index++]));
	//copying list a to list b
	for (int index = 0; index <n; index++)
		brr[index] = arr[index];
	//printing the copied list	
	for (int index = 0; index <n; printf("%d ", brr[index++]));		
	return 0;
}