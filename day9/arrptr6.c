//Program to print unique elements in a list
#include <stdio.h>
#include <stdbool.h>
int main(){
	int size;
	scanf("%d", &size);
	int arr[size], *ptr;
	ptr = arr;
	for (int i = 0; i<size; scanf("%d", ptr+i++));
	ptr = arr;
	for (int i = 0; i<size; i++){
		bool found = false;
		for (int j = i-1; j>=0; j--)
			if ( ptr[i]==ptr[j]){
				found = true;
				break;
			}
		if (!found)
			printf("%d ", ptr[i]);
	}	

	return 0;
}