#include<iostream>
#include<string.h>
using namespace std;

int t,n,m;
long long int dp[31][31];

int jo(int n,int r){
	if(n==r||r==0) return 1;
	if(dp[n][r]) return dp[n][r];
	else return dp[n][r]=jo(n-1,r)+jo(n-1,r-1);
}

int main(void){
	cin>>t;
	while(t--){
//		memset(dp,0,sizeof(dp));
		cin>>n>>m;
		cout<<jo(m,n)<<endl;
	}
	return 0;
}
