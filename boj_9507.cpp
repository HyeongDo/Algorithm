#include<iostream>
using namespace std;

long long dp[70]={1,1,2,4};
int t,inp;

int main(void){
	cin>>t;
	
	for(int n=4;n<=67;n++){
		dp[n]=dp[n-1]+dp[n-2]+dp[n-3]+dp[n-4];
	}
	
	for(int i=0;i<t;i++){
		cin>>inp;
		cout<<dp[inp]<<"\n";
	}
	
	return 0;
}
