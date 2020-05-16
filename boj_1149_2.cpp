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
	dp[0][0]=r[0][0];
	dp[0][1]=r[0][1];
	dp[0][2]=r[0][2];
	for(int i=1;i<n;i++){
		dp[i][0]=min(dp[i-1][1],dp[i-1][2])+r[i][0];
		dp[i][1]=min(dp[i-1][0],dp[i-1][2])+r[i][1];
		dp[i][2]=min(dp[i-1][0],dp[i-1][1])+r[i][2];
	}
	int MIN=min(dp[n-1][0],dp[n-1][1]);
	MIN=min(MIN,dp[n-1][2]);
	cout<<MIN;
	return 0;
}
