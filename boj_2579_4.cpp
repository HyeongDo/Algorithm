#include<iostream>
using namespace std;

int n;
long long int dp[301],st[301];

int main(void){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>st[i];
	}
	dp[0]=st[0];
	dp[1]=dp[0]+st[1];
	dp[2]=max(dp[0],st[1])+st[2];
	for(int i=3;i<n;i++){
		dp[i]=max(dp[i-3]+st[i-1],dp[i-2])+st[i];
	}
	cout<<dp[n-1];
	return 0;
}
