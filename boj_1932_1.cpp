#include<iostream>
using namespace std;

int n,inp[501][501];
long long int ans;
long long int dp[501][501];

int main(void){
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cin>>inp[i][j];
		}
	}
	
	dp[1][1]=inp[1][1];
	for(int i=2;i<=n;i++){
		for(int j=1;j<=i;j++){
			if(j==1){
				dp[i][j]+=dp[i-1][j]+inp[i][j];
			}else if(j==i){
				dp[i][j]+=dp[i-1][j-1]+inp[i][j];
			}else{	
				dp[i][j]+=max(dp[i-1][j-1],dp[i-1][j])+inp[i][j];	
			}
		}
	}
	for(int i=1;i<=n;i++){
		ans = ans < dp[n][i] ? dp[n][i] : ans;
	}
	cout<<ans;
	return 0;
}
