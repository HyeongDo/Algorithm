#include<iostream>
using namespace std;

int n,t[16],p[16];
int dp[16];

int main(void){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>t[i]>>p[i];
	}
	for(int i=1;i<=n;i++){
		dp[i+t[i]]=max(dp[i+t[i]],dp[i]+p[i]);//오늘스케쥴하는경우 
		dp[i+1]=max(dp[i+1],dp[i]);//오늘안하고내일스케쥴하는경우 
	}
	cout<<dp[n+1];
	return 0;
}
