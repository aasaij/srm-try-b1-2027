//Program to implement activity selection problem
#include <stdio.h>
#include <stdlib.h>
typedef struct Game{
	int start;
	int end;
}game;
int compare(const void *x, const void *y){
	return ((game*)x)->end - ((game*)y)->end;
}
int main(){
	int n, cnt=0;
	scanf("%d", &n);
	game games[n];
	game selected[n];
	for (int i = 0; i<n; i++)
		scanf("%d %d", &games[i].start, &games[i].end);
	qsort(games,n,sizeof(game),compare);
	selected[cnt++] = games[0];
	for (int i = 0; i<n-1;){
		for (int j = i+1; j<n; j++){
			if (games[i].end <= games[j].start){
				selected[cnt++] = games[j];
				i = j;
			}
		}
	}
	for (int i = 0; i<cnt; i++)
		printf("%d, %d\n", selected[i].start, selected[i].end);
	
	return 0;
}