#include<iostream>
using namespace std;

int n,inp;
long long int dp[12];

int main(void){
	cin>>n;
	dp[1]=1;
	dp[2]=2;
	dp[3]=4;
	while(n--){
		cin>>inp;
		for(int i=4;i<=inp;i++){
			dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
		}
		cout<<dp[inp]<<endl;
	}
	
	return 0;
}
