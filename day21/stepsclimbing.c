//Program to calculate the number of ways to climb the steps
//dp - memoziation
#include <stdio.h>
int countWays(int nSteps, int dp[]){
	if (nSteps <=2)
		return nSteps;
	if (dp[nSteps]!=-1) return dp[nSteps];
	return dp[nSteps]=countWays(nSteps-1, dp) + countWays(nSteps-2, dp);
}

int main(){
	int n;
	scanf("%d", &n);
//	int dp[10] = {[0 ...9]=-1};
	int dp[n+1];
	for (int i = 0;i<=n; dp[i++]=-1 );
	printf("%d", countWays(n, dp));	
	return 0;
}