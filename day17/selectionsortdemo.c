//Program to implement selection sort algorithm
#include <stdio.h>
#include "stdlib.h"
void swap(int *x, int *y){
	*x = (*x+*y)-(*y=*x);
}
void selectionSort(int arr[], int n){
	for (int i = 0;i<n-1; i++){
		//assuming ith value is minimum
		int minIndex = i;
		//selecting the minimum from the remaining list
		for (int j = i+1;j<n; j++){
			if (arr[minIndex]>arr[j]) minIndex = j;
		}
		//swapping mininum value with ith value if minimum value is present in the remainder list
		if (i!=minIndex){
			swap(arr+minIndex, arr+i);
		}
	}
}

//printing the sorted list
void printArray(int arr[], int n){
	printf("\n[");
	for(int i = 0; i<n-1; i++)
		printf("%d,", *(arr+i)); // printf("%d", *arr+i);	
	printf("%d]", arr[n-1]);
}
int main(){
	int *arr, size;
	//reading list size from the size
	scanf("%d", &size);
	arr = (int*)malloc(size * sizeof(int));
	//reading list of values from the user
	for (int i = 0; i<size; scanf("%d", &arr[i++]));
	selectionSort(arr, size);
	printArray(arr, size);		
}