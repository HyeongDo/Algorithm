#include<iostream>
using namespace std;

int n,dp[1001],inp[1001],MAX;

int main(void){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>inp[i];
	}
	
	for(int i=1;i<=n;i++){
		dp[i]=1;
		for(int j=1;j<=i;j++){
			if(inp[i]>inp[j]&&dp[i]<dp[j]+1){
				dp[i]=dp[j]+1;
			}
		}
		MAX = max(MAX,dp[i]);
	}
	cout<<MAX;
	
	return 0;
}
