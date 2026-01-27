//Program to implement linear search algorithm
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
bool linearSearch(int size, char **list, char searchElement[]){
	for (int i = 0; i<size; i++){
		if (strcmp(list[i],searchElement)==0)
			return true;
	}
	return false;
}

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
	printf("%s", linearSearch(size, nameList, search)?"Found":"Not Found");	
	return 00;
}