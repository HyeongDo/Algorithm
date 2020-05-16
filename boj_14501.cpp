#include<iostream>
#include<utility>
using namespace std;

int n,dp[30];
pair<int,int> p[16];

int main(void){
	cin>>n;
	
	for(int i=1;i<=n;i++){
		cin>>p[i].first>>p[i].second;
	}
	
	for(int i=1;i<=n;i++){
		//i+i의기간일때최대
		dp[i+p[i].first]=max(dp[i+p[i].first],dp[i]+p[i].second);
		dp[i+1]=max(dp[i+1],dp[i]);
	}
	
	cout<<dp[n+1];
	
	
	return 0;
}
