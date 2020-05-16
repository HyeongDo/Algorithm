#include<iostream>
using namespace std;

int n,podo[10001];
long long int dp[10001];

int main(void){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>podo[i];
	}
	dp[0]=podo[0];
	dp[1]=dp[0]+podo[1];
	for(int i=2;i<n;i++){
		dp[i]=dp[i-1];
		dp[i]=max(dp[i-2]+podo[i],dp[i]);
		dp[i]=max(dp[i],dp[i-3]+podo[i-1]+podo[i]);
	}
	cout<<dp[n-1];
	return 0;
}
