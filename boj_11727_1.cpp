#include<iostream>
using namespace std;
#define mod 10007;
int n,dp[1001];

int main(void){
	cin>>n;
	
	dp[1]=1;
	dp[2]=3;
	
	for(int i=3;i<=n;i++){
		dp[i]=(dp[i-1]+2*dp[i-2])%mod;
	}
	
	cout<<dp[n];
	
	return 0;
}
