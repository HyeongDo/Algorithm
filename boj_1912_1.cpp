#include<iostream>
using namespace std;

int n;
long long int su[100001],dp[100001],MAX=-1001;

int main(void){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>su[i];
		MAX=max(MAX,su[i]);	
	}
	if(MAX<=0){
		cout<<MAX;
		return 0;
	}
	dp[0]=su[0];
	MAX=dp[0];
	for(int i=1;i<n;i++){
		dp[i]=max(dp[i-1]+su[i],su[i]);
//		if(dp[i-1]+su[i]>=0){
//			dp[i]=dp[i-1]+su[i];
//		}
//		else{
//			dp[i]=su[i];
//		}
//		cout<<dp[i]<<endl;
		MAX=max(MAX,dp[i]);
//		cout<<MAX<<endl;
	}
	cout<<MAX;
	return 0;
}
