#include<iostream>
#include<algorithm>
using namespace std;

int n,a[1001],dp[1001],MAX;

int main(void){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	for(int i=0;i<n;i++){
		dp[i]=1;
		for(int j=0;j<=i;j++){
			if(a[i]<a[j]&&dp[i]<dp[j]+1){
				dp[i]=dp[j]+1;
//				cout<<a[i]<<a[j]<<endl;
			}
		}
		MAX = MAX < dp[i] ? dp[i] : MAX;
	}
	
	cout<<MAX;
	
	
	return 0;
}
