#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;

int n,m,a[2][100001],dp[2][100001];

int main(void){
	cin>>n;
	while(n--){
		cin>>m;
		for(int i=0;i<2;i++){
			for(int j=1;j<=m;j++){
				cin>>a[i][j];
			}
		}
		
		dp[0][1]=a[0][1];
		dp[1][1]=a[1][1];
		
		for(int i=2;i<=m;i++){
			dp[0][i]=max(dp[1][i-1],dp[1][i-2])+a[0][i];
			dp[1][i]=max(dp[0][i-1],dp[0][i-2])+a[1][i];
//			cout<<dp[0][i]<<" "<<dp[1][i]<<endl;
		}	
		
		cout<<max(dp[0][m],dp[1][m])<<endl;
		
	}
	
	return 0;
} 
