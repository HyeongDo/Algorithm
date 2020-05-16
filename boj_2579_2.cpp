#include<iostream>
using namespace std;

int n,st[301],dp[301];

int main(void){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>st[i];
	}
	
	dp[1]=st[1];
	dp[2]=dp[1]+st[2];
	for(int i=3;i<=n;i++){
		dp[i]=max(dp[i-3]+st[i-1],dp[i-2])+st[i];
	}
	cout<<dp[n];
	return 0;
}
