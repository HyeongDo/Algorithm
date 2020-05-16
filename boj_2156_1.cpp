#include<iostream>
using namespace std;

int n;
long long int podo[10001];
long long int dp[10001],ans;

int main(void){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>podo[i];
	}
	dp[1]=podo[1];
	dp[2]=dp[1]+podo[2];
	for(int i=3;i<=n;i++){
		dp[i]=dp[i-1];
		dp[i]=max(dp[i],dp[i-2]+podo[i]);
		dp[i]=max(dp[i],dp[i-3]+podo[i-1]+podo[i]);
//		dp[i]=max(dp[i-2],dp[i-3]+podo[i-1])+podo[i];
	}
	for(int i=1;i<=n;i++){
		ans=max(ans,dp[i]);
	}
	cout<<ans;
	return 0;
}
