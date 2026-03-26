//Program to find longest increasing subsequence in the list
#include <stdio.h>

int max(int x , int y){
	return x > y?x:y;
}
int lis(int arr[], int n){
	int dp[n];
	//initializing dp array into 1
	for(int i =0; i<n;dp[i++]=1);
	//filling the dp table
	for(int i = 1; i<n; i++){
		for(int j = 0; j<i; j++)
			if(arr[j]<arr[i])
				dp[i] = max(dp[i], dp[j]+1);
	}
	//finding maximum value from dp table
	int max = dp[0];
	for (int i = 1; i<n; i++)
		if (max < dp[i]) max = dp[i];
	return max;
}
int main(){
	int size;
	scanf("%d", &size)	;
	int list[size];
	for (int i = 0; i<size; scanf("%d", &list[i++]));
	printf("%d",lis(list, size));
	return 0;
}