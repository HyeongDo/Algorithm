#include<iostream>
#include<string.h>
using namespace std;

int t,n,dp[101],ans;

int main(void){
	cin>>t;
	for(int i=1;i<=100;i++){
		dp[i]=1;
	}
	
	while(t--){
		cin>>n;
		for(int i=2;i<=n;i++){
	 		for(int j=i;j<=n;j+=i){
				dp[j]=!dp[j];
			}
		}
		
		for(int i=1;i<=n;i++){
			ans+=dp[i];
		}
		
		cout<<ans<<endl;
		
		for(int i=1;i<=100;i++){
			dp[i]=1;
		}
		ans=0;
	}
	
	return 0;
}
