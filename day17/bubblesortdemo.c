//Program to implment bubble sort algorithm
#include <stdio.h>
#include <stdlib.h>
#include "sorting.h"
int main(){
	int *arr, size;
//	int* arr1, arr2;
	scanf("%d", &size);
	arr = (int*)malloc(size * sizeof(int));
	for(int i = 0; i<size; i++)
		scanf("%d", arr+i);
	bubbleSort(arr, size);
	printArray(arr, size);
	return 0;
}