#include<iostream>
using namespace std;

int n;
long long int dp[100001],s[100001],MAX=-1001;

int main(void){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>s[i];
	}
	dp[1]=s[1];
	MAX=dp[1];
	for(int i=2;i<=n;i++){
		dp[i]=max(dp[i-1]+s[i],s[i]);
//		cout<<dp[i]<<"  ";
//		cout<<MAX<<endl;
		MAX=max(MAX,dp[i]);
	}	
	cout<<MAX;
	return 0;
}
