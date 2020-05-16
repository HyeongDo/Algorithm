#include<iostream>
using namespace std;

int n,a[301],dp[301];

int main(void){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	/*
	dp[n]=max(dp[n-3]+a[n-2],dp[n-1])+a[n]
	
	dp[i-2]+a[i-1] ¾ÈµÊ
	
	 
	
	*/
	dp[1]=a[1];
	dp[2]=a[1]+a[2];
	dp[3]=max(dp[0]+a[2],dp[1])+a[3];
	for(int i=4;i<=n;i++){
		dp[i]=max(dp[i-3]+a[i-1],dp[i-2])+a[i];
	}
	cout<<dp[n];
	
	return 0;
}
