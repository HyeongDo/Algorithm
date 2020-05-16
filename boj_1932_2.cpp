#include<iostream>
using namespace std;

int n,dp[501][501];

int main(void){
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			cin>>dp[i][j];
		}
	}
	int ans=0;
	for(int i=1;i<n;i++){
		for(int j=0;j<=i;j++){
			if(j==0){
				dp[i][j]+=dp[i-1][j];
			}else if(i==j){
				dp[i][j]+=dp[i-1][j-1];
			}else{
				dp[i][j]+=max(dp[i-1][j-1],dp[i-1][j]);
			}
		}
	}
	for(int i=0;i<n;i++){
		ans=max(ans,dp[n-1][i]);
	}
	cout<<ans;
	return 0;
}
