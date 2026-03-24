#include <stdio.h>
//Program to print nth term of fibonacci series
//int fib(int n){
//	if (n<=1) // base case
//		return n;
//	return fib(n-1)+fib(n-2); //recursive call
//}
//implementing tabulation method - DP -- Bottom up approach
//int fib(int n){
//	int dp[n+1];
//	dp[0] = 0;
//	dp[1] = 1;
//	for (int i = 2; i<=n;i++)
//		dp[i] = dp[i-1] +dp[i-2];
//	return dp[n];
//}
//implementing memoziation --> top down approach
int fib(int n, int dp[]){
	if (n<=1)
		return n;
	if(dp[n]!=-1)
		return dp[n];	
	return dp[n]= fib(n-1, dp)+ fib(n-2, dp);
}
int main(){
	int n;
	scanf("%d", &n);
	int dp[n+1];

	for(int i = 0; i<=n; i++)
		dp[i]=-1;
	printf("%d", fib(n, dp));
	return 0;
}
