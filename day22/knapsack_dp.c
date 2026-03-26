#include <stdio.h>
//Program to implement Dynamic Knapsack problem
typedef struct Product{
	char name[20];
	int profit;
	int size;
}Product;
int max(int x, int y){
	return x > y ? x : y;
}
int knapsack(Product p[], int pSize, int knapSize){
	int dp[pSize+1][knapSize+1];
	//Initializing first row as '0'
	for(int c = 0; c<=knapSize; c++)
		dp[0][c] = 0;
	//Initializing first column as '0'
	for(int r = 0; r<=pSize; r++)
		dp[r][0] = 0;
	//Filling the dp table
	for (int r = 1; r<=pSize; r++){
		for (int c = 1; c<=knapSize; c++){
			if (c>=p[r-1].size){
				dp[r][c] = max(dp[r-1][c], p[r-1].profit + dp[r-1][c-p[r-1].size]);
			}
			else
				dp[r][c] = dp[r-1][c];
		}
	}
	return dp[pSize][knapSize];
}
int main(){
	Product p[] = {{"Suit",3000, 4},{"Mobile", 1500, 1},{"Watch",2000,3}};//,{"Ring",2000, 1}};
	int pSize = sizeof(p)/sizeof(p[0]);
	printf("%d", knapsack(p,pSize, 4));
	return 0;
}