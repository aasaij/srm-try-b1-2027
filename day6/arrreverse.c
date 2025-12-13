//Program to print the list in reverse order
#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int arr[n];
	//reading list of n integers
	for (int index = 0; index <n; scanf("%d", &arr[index++]));
	//printing the list in reverse order
//	for (int index =n-1; index >=0; index--)
//		printf("%d ", arr[index]);
	for (int index =n-1; index >=0; printf("%d ", arr[index--]));
		
	return 0;
}