//DMA functions in C
//
//void*	malloc(size_t numBytes);
//void* calloc(size_t numBlocks, size_t blockSize);
//void* realloc(void* oldBlock, size_t newSize);
//void free(void* existBlock);

#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);	
	int *arr;
	arr = (int *)malloc(n * sizeof(int));
	arr[0] = 10;
	arr[1] = 11;
	arr[2] = 21;
	
	return 0;
}