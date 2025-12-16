//Program to check whether the both matrices are identical or not
#include <stdio.h>

int main(){
	int arowSize, acolSize, browSize, bcolSize;
	scanf("%dx%d",&arowSize, &acolSize);
	int arr[arowSize][acolSize];
	for (int r = 0; r<arowSize; r++)
		for (int c = 0; c<acolSize; c++)
			scanf("%d", &arr[r][c]);
	scanf("%dx%d",&browSize, &bcolSize);
	int brr[browSize][bcolSize];
	for (int r = 0; r<browSize; r++)
		for (int c = 0; c<bcolSize; c++)
			scanf("%d", &brr[r][c]);
	//checking whether both matrices are equal or not 			
	if (arowSize == browSize && acolSize == bcolSize){
		for (int r = 0; r<browSize; r++)
			for (int c = 0; c<bcolSize; c++)
				if (arr[r][c] != brr[r][c]){
					printf("Not equal");
					return 0;
				}
		printf("Equal!"); 
	}
	else
		printf("Not Equal");
	return 0;
}