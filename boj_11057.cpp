#include<iostream>
using namespace std;

int n,dp[1005][11],ans;

int main(void){
	cin>>n;

	for(int i=0;i<=9;i++){
		dp[1][i]=1;
	}
	
	for(int i=2;i<=n;i++){
		dp[i][0]=dp[i-1][0];
		for(int j=0;j<=9;j++){
			dp[i][j]=(dp[i-1][j]+dp[i][j-1])%10007;
		}
	}
	
	for(int i=0;i<=9;i++){
		ans = (ans+dp[n][i])%10007;
	}
	
	cout<<ans;
		
	
	return 0;
}
