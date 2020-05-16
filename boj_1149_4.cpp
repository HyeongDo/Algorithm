#include<iostream>
using namespace std;

int n,dp[1001][3],color[1001][3];

int main(void){
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<3;j++){
			cin>>color[i][j];
		}
	}
	dp[0][0]=color[0][0];
	dp[0][1]=color[0][1];
	dp[0][2]=color[0][2];
	for(int i=0;i<n;i++){
		dp[i][0]=min(dp[i-1][1],dp[i-1][2])+color[i][0];
		dp[i][1]=min(dp[i-1][0],dp[i-1][2])+color[i][1];
		dp[i][2]=min(dp[i-1][0],dp[i-1][1])+color[i][2];
	}
	int MIN=min(dp[n-1][0],dp[n-1][1]);
	MIN=min(MIN,dp[n-1][2]);
	cout<<MIN;
	return 0;
}
