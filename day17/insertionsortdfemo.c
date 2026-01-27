//Program to implement insertion sort algorithm
#include <stdio.h>
#include <stdlib.h>
void swap(int *x, int *y){
	*x = (*x+*y)-(*y=*x);
}
//implementing insertionSort algorithm
void insertionSort(int arr[], int n){
	for(int i = 1; i<n; i++){
		int key = arr[i], j;
		for (j = i-1; j>=0 && arr[j]>key; j--)
			arr[j+1] = arr[j];
		arr[j+1] = key;	
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
	insertionSort(arr, size);
	printArray(arr, size);		
}