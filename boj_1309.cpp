#include<iostream>
using namespace std;

#define mod 9901;

int n,dp[100001];

int main(void){
	cin>>n;
	
	dp[1]=3;
	dp[2]=7;
	
	for(int i=3;i<=n;i++){
		dp[i]=(dp[i-1]*2+dp[i-2])%mod;
	}
	
	cout<<dp[n];
	
	return 0;
}
