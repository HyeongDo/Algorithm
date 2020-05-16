#include<iostream>
using namespace std;

int n,k,inp[101],dp[10001];

int main(void){
	cin>>n>>k;
	
	for(int i=1;i<=n;i++){
		cin>>inp[i];
	}
	dp[0]=1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=k;j++){
			if(j>=inp[i]){
				dp[j]+=dp[j-inp[i]];
			}
		}
	}
	
	cout<<dp[k];
	
	return 0;
}

