#include<iostream>
using namespace std;

int n;
long long int dp[1001],s[1001],MAX;

int main(void){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s[i];
	}
	for(int i=0;i<n;i++){
		dp[i]=1;
		for(int j=0;j<=i;j++){
			if(s[i]>s[j]&&dp[i]<dp[j]+1){
				dp[i]=dp[j]+1;
			}
		}
		MAX=max(MAX,dp[i]);
	}
	cout<<MAX;
	return 0;
}
