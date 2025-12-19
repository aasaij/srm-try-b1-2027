#include <stdio.h>
void change(int arr[]){
//	arr[0] = 1000;
	printf("%d\n", sizeof(arr));
}

int main(){
	int arr[10] = {10, 200, 30};
	change(arr);
	printf("%d", *arr);
	return 0;
}