#include<iostream>
using namespace std;

int n;
long long p[10001],dp[10001];

int main(void){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>p[i];
	for(int i=1;i<=n;i++){
		dp[i]=p[i];
		for(int j=1;j<i;j++){
			dp[i]=max(dp[i],dp[i-j]+p[j]);
		}
	}
	cout<<dp[n];
	return 0;
}
