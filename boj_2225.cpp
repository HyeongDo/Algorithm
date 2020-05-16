#include<iostream>
using namespace std;
#define mod 1000000000;
int n,k,dp[201][201];

int main(void){
	cin>>n>>k;
	
	for(int i=1;i<=n;i++){
		dp[1][i]=1;
	}
	for(int i=1;i<=k;i++){
		dp[i][0]=1;
	}
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=k;j++){
			dp[j][i]=(dp[j-1][i]+dp[j][i-1])%mod;
		}
	}
	cout<<dp[k][n];
	return 0;
}
