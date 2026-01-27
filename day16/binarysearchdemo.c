//Program to implement binary search algorithm
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
bool binarySearch(int low,int high, char **list, char search[]){
	if (low<=high){
		int mid = (low+high)/2;
		int diff = strcmp(list[mid], search);
		if (diff == 0)
			return true;
		else if (diff>0)
			return binarySearch(low, mid-1, list, search);
		else 
			return binarySearch(mid+1, high, list, search);
	}
	return false;
}
//bool binarySearch(int size, char **list, char search[]){
//	int low, high;
//	low = 0, high = size-1;
//	while(low<=high){
//		int mid = (low+high)/2;
//		int diff = strcmp(list[mid], search);
//		if (diff == 0)
//			return true;
//		else if (diff>0)
//			high = mid-1;
//		else 
//			low = mid+1;
//	}
//	return false;
//}

int main(){
	char **nameList;
	char search[31];
	int size;
	scanf("%d", &size);
	nameList = (char**)malloc(sizeof(char*)*size);
	for (int i = 0; i<size; i++){
		nameList[i] = (char*)malloc(sizeof(char)*31);
		scanf("%s", nameList[i]);
	}
	//Getting the name to be searched
	scanf("%s", search);
//	printf("%s", binarySearch(size, nameList, search)?"Found":"Not Found");	
	printf("%s", binarySearch(0,size-1, nameList, search)?"Found":"Not Found");	
	return 00;
}