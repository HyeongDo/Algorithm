#include<iostream>
using namespace std;
#define mod 1000000000;
int n,dp[101];

int main(void){
	cin>>n;
	dp[1]=9;
	dp[2]=17;
	for(int i=3;i<=n;i++){
		dp[i]=2*dp[i-1]-2*(i-1);
	}
	cout<<dp[n];
	
	return 0;
}
