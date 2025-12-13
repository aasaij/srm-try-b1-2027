#include <stdio.h>

int main(){
//	int arr[] = {10,20,30,40, 50,60};
//	int size  = sizeof(arr)/sizeof(arr[0]);
//	printf("%d", arr[size-1]); //print the last element in the list
//	int arr[5];
//	int arr[5] = {10};
//	int arr[5] = {[2]=10};
//	int arr[5] = {-1,-1,-1,-1,-1};
	int arr[5] = {[0 ...4]=-1};
//	arr[2] = 100;
	printf("%d %d", arr[0], arr[2]);
	return 0;
	
}