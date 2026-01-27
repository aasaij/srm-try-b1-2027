void swap(int *x, int *y){
	*x = (*x+*y)-(*y=*x);
}
//implementing bubble sort algorithm
void bubbleSort(int arr[], int n){
	for(int i = 1; i<n; i++)
		for(int j = 0;j<n-i; j++)
			if (arr[j]>arr[j+1])
				swap(arr+j,arr+j+1);
}
//implementing selection sort algorithm
void selectionSort(int arr[], int n){
	for (int i = 0;i<n-1; i++){
		//assuming ith value is minimum
		int minIndex = i;
		//selecting the minimum from the remaining list
		for (int j = i+1;j<n; j++){
			if (arr[minIndex]>arr[j]) minIndex = j;
		}
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