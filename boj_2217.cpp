#include<iostream>
#include<algorithm>
using namespace std;

int n,dp[100001];
long long int MAX=-1,ans;

int main(void){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>dp[i];
	}
	
	sort(dp,dp+n,greater<int>());
	
	for(int i=0;i<n;i++){
		ans=dp[i]*(i+1);
		if(MAX<ans) MAX=ans;
	}
	
	cout<<MAX;
	
	return 0;
}
