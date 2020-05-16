#include<iostream>
using namespace std;

int n,k,inp[101],dp[10001];

int main(void){
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>inp[i];
	}
	
	for(int i=1;i<=k;i++){
		dp[i]=10001;
	}
	
	for(int i=1;i<=n;i++){
		for(int j=inp[i];j<=k;j++){
			dp[j]=min(dp[j],dp[j-inp[i]]+1);
		}
	}
	if(dp[k]==10001) cout<<-1;
	else cout<<dp[k];
	
	return 0;
}
