#include<iostream>
using namespace std;

int n,a[201],dp[201],MAX;

int main(void){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	
	for(int i=1;i<=n;i++){
		dp[i]=1;
		for(int j=1;j<=i;j++){
			if(a[i]>a[j]&&dp[i]<dp[j]+1){
				dp[i]=dp[j]+1;
			}
		}
		MAX = MAX < dp[i] ? dp[i] : MAX;
	}
	
	cout<<n-MAX;
	
	return 0;
}
