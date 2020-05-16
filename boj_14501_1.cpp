#include<iostream>
using namespace std;

int n,dp[1001],MAX,t[1001],p[1001];

int main(void){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>t[i]>>p[i];
	}
	for(int i=1;i<=n;i++){
		dp[i+t[i]]=max(dp[i+t[i]],dp[i]+p[i]);
		dp[i+1]=max(dp[i],dp[i+1]);
	}
	cout<<dp[n+1];
	return 0;
}
