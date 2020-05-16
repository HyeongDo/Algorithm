#include<iostream>
using namespace std;

int t,n,dp[2][41];

int main(void){
	cin>>t;
	dp[0][0]=1;
	dp[1][1]=1;
	while(t--){
		cin>>n;
		for(int i=2;i<=n;i++){
			dp[0][i]=dp[0][i-1]+dp[0][i-2];
			dp[1][i]=dp[1][i-1]+dp[1][i-2];
		}
		cout<<dp[0][n]<<" "<<dp[1][n]<<endl;
	}
	
	return 0;
}
