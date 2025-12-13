//Program to implement linear search algorithm
#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int arr[n],searchElement;
	for (int index = 0; index<n; scanf("%d", &arr[index++]));
	//getting search element
	scanf("%d", &searchElement);
	//implement linear serach algorithm
	for (int index = 0; index<n; index++){
		//checking whether the search element is found or not
		if ( arr[index]==searchElement){
			printf("Found");
			return 0;
		}
	}
	printf("Not found!");
	
	return 0;
}