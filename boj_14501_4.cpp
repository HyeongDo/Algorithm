#include<iostream>
using namespace std;

int n,t,p,dp[16];

int main(void){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>t>>p;
		dp[i]=max(dp[i+1],dp[i+t]+p);
//		dp[i+1]=max(dp[i],dp[i+1]);
//		/*
//		다음날에 얻은 수익과 오늘까지의 수익 비교
//		*/
//		dp[i+t]=max(dp[i]+p,dp[i+t]);
//		/*
//		당일의 일을 한 것과 안 한 것의 비교. 
//		*/
	}
	cout<<dp[n-1]; 
	return 0;
}
