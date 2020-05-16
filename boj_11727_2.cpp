#include<iostream>
using namespace std;

#define mod 10007;

int n;
long long int dp[1001];

int main(void){
	cin>>n;
	dp[1]=1;
	dp[2]=3;
	dp[3]=5;
	for(int i=4;i<=n;i++){
		dp[i]=(dp[i-1]+dp[i-2]*2)%mod;
	}
	cout<<dp[n];
	return 0;
}
