#include<iostream>
using namespace std;

int t,k,a[501],dp[501];

int main(void){
	
	cin>>t;
	while(t--){
		cin>>k;
		for(int i=1;i<=k;i++){
			cin>>a[i];
		}
		for(int i=1;i<=k;i++){
			dp[i]=10001;
		}
		for(int i=1;i<=k;i++){
			dp[i]+=min(dp[i],dp[i-1]+a[i]);
		}
		
		cout<<dp[k]<<endl;
	}
	
	return 0;
}
