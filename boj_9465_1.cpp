#include<iostream>
using namespace std;

int t,n,st[2][100001],dp[2][100001];

int main(void){
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<=1;i++){
			for(int j=1;j<=n;j++){
				cin>>st[i][j];
			}
		}
		dp[0][1]=st[0][1];
		dp[1][1]=st[1][1];
		dp[0][2]=dp[1][1]+st[0][2];
		dp[1][2]=dp[0][1]+st[1][2];
		for(int i=3;i<=n;i++){
			dp[0][i]=max(dp[1][i-1],dp[1][i-2])+st[0][i];
			dp[1][i]=max(dp[0][i-1],dp[0][i-2])+st[1][i];
		}
		cout<<max(dp[0][n],dp[1][n])<<endl;
	}
	
	return 0;
}
