#include<iostream>
using namespace std;

#define mod 1000000000;

int n;
long long int dp[101][11],ans;

int main(void){
	cin>>n;
	for(int i=1;i<=9;i++){
		dp[1][i]=1;
	}
	for(int i=2;i<=n;i++){
		for(int j=0;j<=9;j++){
			dp[i][j]=(dp[i-1][j-1]+dp[i-1][j+1])%mod;
		}
	}
	for(int i=0;i<=9;i++){
		ans+=dp[n][i];
	}
	cout<<ans%mod;
	return 0;
}
