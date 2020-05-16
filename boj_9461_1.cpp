#include<iostream>
using namespace std;

int t,n;
long long int dp[101];

int main(void){
	cin>>t;
	dp[1]=1,dp[2]=1,dp[3]=1;
	while(t--){
		cin>>n;
		for(int i=4;i<=n;i++){
			dp[i]=dp[i-2]+dp[i-3];
		}
		cout<<dp[n]<<endl;
	}
	
	return 0;
}
