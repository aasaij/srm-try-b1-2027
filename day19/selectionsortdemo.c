//Greedy Algorithm -> selection sort
#include <stdio.h>

//function proto-types or function declarations
void selectionSort(int[], int);
void printArray(int[], int);
void swap(int*, int*);

int main(){
	int size;
	scanf("%d", &size);
	int arr[size];
	//getting array elements from the user
	for (int i = 0; i<size; i++)
		scanf("%d", arr+i);
	selectionSort(arr, size);
	printArray(arr, size);	
	return 0;
}
void selectionSort(int a[], int n){
	for (int i = 0; i<n; i++){
		int minIndex = i;
		for (int j = i+1; j<n; j++)
			if (a[minIndex]>a[j])
				minIndex = j;
		if (i!=minIndex)
			swap(a+i, a+minIndex);
	}
}
void swap(int *x, int *y){
	int temp = *x;
	*x = *y;
	*y = temp;
}
void printArray(int a[], int n){
	printf("\n[");
	for (int i = 0; i<n-1; i++)
		printf("%d,",*(a+i));
	printf("%d]", *(a+n-1));		
}