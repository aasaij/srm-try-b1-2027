//Program to implement merge sort algorithm
#include <stdio.h>
void merge(int arr[], int low, int mid, int high){
	int n1, n2;
	//finding left array size
	n1 = mid-low+1;
	//finding right array size
	n2 = high-mid;	
	int left[n1], right[n2];
	//copying left array elements
	for (int i = 0; i<n1; i++)
		left[i] = arr[i+low];
	//copying right array elements
	for (int i = 0; i<n2; i++)
		right[i] = arr[i+mid+1];
	int i, j, k;
	//merging both arrays
	for (i =0, j = 0, k=low; i<n1 && j < n2; k++){
		if (left[i]<right[j])
			arr[k] = left[i++];
		else
			arr[k] = right[j++];
	}
	//checking whether any element present in the left array
	while(i<n1)
		arr[k++] = left[i++];
	//checking whether any element present in the right array
	while(j<n2)
		arr[k++] = right[j++];
}

void mergeSort(int a[], int low, int high){
	if (low<high){
		int mid = (low+high)/2;
		mergeSort(a, low, mid);
		mergeSort(a, mid+1, high);		
		merge(a, low, mid, high);
	}
}
void printArray(int arr[], int n){
	printf("\n[");
	for (int i = 0; i<n-1;i++)
		printf("%d,", arr[i]);
	printf("%d]", arr[n-1]);
}
int main(){
	int arr[] = {1, 11, 5, 7, 21, 9};
	int size = sizeof(arr)/sizeof(arr[0]);
	mergeSort(arr, 0, size-1);
	printArray(arr, size);	
	return 0;
}