#include<iostream>
using namespace std;

int n,r[1001][3],dp[1001][3];

int main(void){
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<3;j++){
			cin>>r[i][j];
		}
	}
	for(int i=0;i<n;i++){
		dp[i][0]=min(dp[i-1][1],dp[i-1][2])+r[i][0];
		dp[i][1]=min(dp[i-1][0],dp[i-1][2])+r[i][1];
		dp[i][2]=min(dp[i-1][0],dp[i-1][1])+r[i][2];
	}
	int ans=min(dp[n-1][0],dp[n-1][1]);
	ans=min(ans,dp[n-1][2]);
	cout<<ans;
	return 0;
}
