#include<iostream>
using namespace std;

int n;
long long int st[301];
long long int dp[301];

int main(void){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>st[i];
	}
	dp[1]=st[1];
	dp[2]=dp[1]+st[2];
	for(int i=3;i<=n;i++){
		dp[i]=max(dp[i-2],dp[i-3]+st[i-1])+st[i];
//		dp[i]=dp[i-1];
//		dp[i]=max(dp[i],dp[i-2]+st[i]);
//		dp[i]=max(dp[i],dp[i-3]+st[i-1]+st[i]);
	}
	cout<<dp[n];
	return 0;
}
