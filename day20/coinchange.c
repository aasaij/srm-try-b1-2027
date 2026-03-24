//Program to implement coin change problem using greedy strategy
#include <stdio.h>
#include "stdlib.h"
int compare(const void *x, const void *y){
	return *(int*)y - *(int*)x;
}
int main(){
	int amount, curCnt=0;
	int nDenoms;
	scanf("%d", &amount);
	scanf("%d",&nDenoms);
	int denoms[nDenoms];
	for (int i = 0; i<nDenoms; i++)
		scanf("%d", &denoms[i]);
	qsort(denoms, nDenoms, sizeof(denoms[0]),compare);
	//checking whether the amount is divisable by the last denominations
	if (amount >= denoms[nDenoms-1]){
		for(int i =0;i<nDenoms && amount >= denoms[nDenoms-1]; i++){
			int numCur = amount / denoms[i];
			amount = amount - numCur * denoms[i];
			curCnt += numCur;
		}
		if (!amount) //checking whether amount becomes zero or not
		{
			printf("Minimum number of currencies : %d", curCnt);
			return 0;
		}
	}
	printf("Invalid amount!");
	return 0;
}