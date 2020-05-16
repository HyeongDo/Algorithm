#include<iostream>
using namespace std;

int n;
long long int MAX;
long long int tri[501][501];
long long int dp[501][501];

int main(void){
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cin>>tri[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			if(j==1){
				dp[i][j]=dp[i-1][j]+tri[i][j];
			}else if(j==i){
				dp[i][j]=dp[i-1][j-1]+tri[i][j];
			}else{
				dp[i][j]=max(dp[i-1][j-1],dp[i-1][j])+tri[i][j];
			}
			if(i==n){
				MAX=max(MAX,dp[i][j]);
			}
		}
	}
	cout<<MAX;
	return 0;
}
