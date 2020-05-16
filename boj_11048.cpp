#include<iostream>
#include<algorithm>
using namespace std;

int n,m,a[1001][1001],dp[1001][1001];

int main(void){
	cin>>n>>m;
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
		}
	}
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			
			dp[i][j]=max(dp[i-1][j]+a[i][j],dp[i][j-1]+a[i][j]);
			dp[i][j]=max(dp[i][j],dp[i-1][j-1]+a[i][j]);
		}		
	}
	
	cout<<dp[n][m];
	
	
	return 0;
}
