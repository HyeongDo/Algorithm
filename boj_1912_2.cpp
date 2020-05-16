#include<iostream>
using namespace std;

int n;
long long int dp[100001],su[100001],MAX;

int main(void){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>su[i];
	}
	
	dp[0]=su[0];
	MAX=su[0];
	for(int i=1;i<n;i++){
		dp[i]=max(dp[i-1]+su[i],su[i]);
		MAX=max(MAX,dp[i]);
	}
	cout<<MAX;
	return 0;
}
