#include<iostream>
#include<string.h>
using namespace std;

int t,n,m;
long long dp[10005];
int nn[21];

int main(void){
	cin>>t;
	
	for(int i=0;i<t;i++){
		memset(dp,0,sizeof(dp));
		
		cin>>n;
		for(int j=1;j<=n;j++){
			cin>>nn[j];	
		}
		
		cin>>m;
		dp[0]=1;
		for(int j=1;j<=n;j++){
			for(int k=nn[j];k<=m;k++){
				dp[k]+=dp[k-nn[j]];
			}
		}
		cout<<dp[m]<<endl;
	}
	
	
	return 0;
}
