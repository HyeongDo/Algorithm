#include<iostream>
#include<algorithm>
using namespace std;

int n,MAX=-1,MIN=10001;
int st[1001],dp[1001];

int main(void){
	cin>>n;
	
	for(int i=1;i<=n;i++){
		cin>>st[i];
	}
	
	for(int i=1;i<=n;i++){
		MIN=10001;
		MAX=-1;
		for(int j=i;j>0;j--){
			MAX=max(MAX,st[j]);
			MIN=min(MIN,st[j]);
			dp[i]=max(dp[i],dp[j-1]+MAX-MIN);
		}
	}
	
	cout<<dp[n];
	
	return 0;
}
