//Program to calculate the maximum profit - cloth cutting problem
#include <stdio.h>
int max(int x, int y ){
	return x > y? x: y;
}
int main(){
	int length;
	scanf("%d", &length);
	int profits[length+1];
	int dp[length+1];
	//getting the profit details for every cloth
	for (int i = 1; i<=length;i++)
		scanf("%d", &profits[i]);
	//filling the DP table
	dp[0] = 0;
	for (int i = 1; i<=length; i++){
		dp[i] = 0;
		for(int j = 1; j<=i; j++)
			dp[i] = max(dp[i], profits[j]+dp[i-j] );
	}
	printf("%d", dp[length]);
	return 0;
}