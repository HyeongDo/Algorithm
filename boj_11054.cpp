#include<iostream>
#include<algorithm>
using namespace std;

int n,maxx,arr[1001],dp[1001],dp2[1001];

int main(void){
	cin>>n;
	for(int i=0;i<n;i++){//ют╥б 
		cin>>arr[i];
	}
	
	for(int i=0;i<n;i++){
		dp[i]=1;
		dp2[i]=1;
		for(int j=0;j<i;j++){
			if(arr[i]>arr[j]&&dp[i]<dp[j]+1){
				dp[i]=dp[j]+1;
			}	
		}
	}
	
	for(int i=n-1;i>=0;i--){
		for(int j=n-1;j>i;j--){
			if(arr[i]>arr[j]&&dp2[i]<dp2[j]+1){
				dp2[i]=dp2[j]+1;
			}
		}
	}
	
	for(int i=0;i<n;i++){
		maxx=max(maxx,dp[i]+dp2[i]-1);
	}
	
	cout<<maxx;
	
	return 0;
}
