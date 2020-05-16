#include<iostream>
using namespace std;

int n;
long long int dp[10001],s[10001];

int main(void){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>s[i];
	}
	dp[1]=s[1];
	for(int i=2;i<=n;i++){
		dp[i]=s[i];
		for(int j=1;j<i;j++){
			dp[i]=max(dp[i],dp[i-j]+s[j]);
		}
	}
	cout<<dp[n];
	return 0;
}
