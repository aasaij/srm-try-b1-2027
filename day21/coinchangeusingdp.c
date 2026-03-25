//Program to implement coin change problem - Dynamic Programming
#include <stdio.h>
#include <limits.h>
int min(int x, int y){
	return x < y ? x:y;
}

int main(){
	int amt;
	int nDenoms;
	scanf("%d", &amt);
	scanf("%d", &nDenoms);
	int denoms[nDenoms];
	int dp[amt+1];
	dp[0] = 0;
	for (int i = 1; i<=amt;i++)
		dp[i] = INT_MAX;
	for(int i =0; i<nDenoms; i++)
		scanf("%d", &denoms[i]);
	for (int coin = 0;coin<nDenoms; coin++){
		for (int i = denoms[coin]; i<=amt; i++)
			if (i>=denoms[coin] && dp[i-denoms[coin]]!=INT_MAX)
				dp[i] = min(dp[i],1+dp[i-denoms[coin]]);			
	} 
	if (dp[amt]!=INT_MAX)
		printf("%d", dp[amt]);
	else
		printf("-1");
	return 0;
}