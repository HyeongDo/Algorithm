#include<iostream>
using namespace std;

int n,dp[1001][3],col[1001][3];

int main(void){
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<3;j++){
			cin>>col[i][j];
		}
	}
	dp[0][0]=col[0][0];
	dp[0][1]=col[0][1];
	dp[0][2]=col[0][2];
	for(int i=1;i<n;i++){
		dp[i][0]=min(dp[i-1][1],dp[i-1][2])+col[i][0];
		dp[i][1]=min(dp[i-1][0],dp[i-1][2])+col[i][1];
		dp[i][2]=min(dp[i-1][0],dp[i-1][1])+col[i][2];
	}
	int MIN=min(dp[n-1][0],dp[n-1][1]);
	MIN=min(MIN,dp[n-1][2]);
	cout<<MIN;
	return 0;
}
