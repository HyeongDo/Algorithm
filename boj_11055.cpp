#include<iostream>
#include<algorithm>
using namespace std;

int n,a[1001],dp[1001],sum[1001],MAX;

int main(void){
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>a[i];
		dp[i]=a[i];
	}
	
	for(int i=0;i<n;i++){		
		for(int j=0;j<i;j++){
			if(a[i]>a[j]&&dp[i]<dp[j]+a[i]){
				dp[i]=dp[j]+a[i];
//				cout<<dp[i]<<endl;
			}
		}
		MAX = MAX < dp[i] ? dp[i] : MAX;
	}
	
	cout<<MAX;
	
	return 0;
}
