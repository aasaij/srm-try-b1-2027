//Program to reverse the orginal array
#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int arr[n];
	//reading list of n integers
	for (int index = 0; index <n; scanf("%d", &arr[index++]));
	//reversing the list of values
//	for(int i = 0, j = n-1;i<j;i++,j--){
//		int temp = arr[i];
//		arr[i] = arr[j];
//		arr[j] = temp;
//	}
	for(int i = 0, j = n-1;i<j;i++,j--)
		//swapping of right and left elements
		arr[i] = arr[i] + arr[j] - (arr[j]=arr[i]);
//		x = (x+y) - (y = x);
	for (int index = 0; index <n; printf("%d ", arr[index++]));
	return 0;
}