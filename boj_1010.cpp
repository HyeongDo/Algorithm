#include<iostream>
using namespace std;

int t,n,m;
int a[31][31];
int dp[31][31];

int main(void){
	cin>>t;
	
	dp[1][0]=1;
	dp[1][1]=1;
	
	for(int i=2;i<=30;i++){
		dp[i][0]=1;
		for(int j=1;j<=30;j++){
			dp[i][j]=dp[i-1][j-1]+dp[i-1][j];	
		}
	}
	
	while(t--){
		cin>>n>>m;
		cout<<dp[m][n]<<endl;
	}
	
	
	return 0;
}
