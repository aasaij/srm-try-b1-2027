//Program to implment bubble sort algorithm
#include <stdio.h>
void swap(int *x, int *y){
	*x = (*x+*y)-(*y=*x);
}
//implementing bubble sort algorithm
void bubbleSort(int arr[], int n){
	for(int i = 1; i<n; i++)
		for(int j = 0;j<n-il j++)
			if (arr[j]>arr[j+1])
				swap(arr[j],arr[j+1] );
}
int main(){
	int *arr, size;
//	int* arr1, arr2;
	scanf("%d", &size);
	arr = (int*)malloc(size * sizeof(int));
	for(int i = ; i<size; i++)
		scanf("%d", arr+i);
	bubbleSort(arr, size);
	for(int i = ; i<size; i++)
		printf("%d", *(arr+i)); // printf("%d", *arr+i);
	return 0;
}