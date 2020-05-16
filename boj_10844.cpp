#include<stdio.h>
const int mod = 1e9;
int n;
long long ans;
int dp[101][11];

int main(void){
	scanf("%d",&n);
	
	for(int i=1;i<=9;i++){
		dp[1][i]=1;
	}
	
	for(int i=2;i<=n;i++){
		for(int j=0;j<=9;j++){
			if(j==0) dp[i][j]=dp[i-1][j+1];
			else if(j==9) dp[i][j]=dp[i-1][j-1];
			else dp[i][j]=(dp[i-1][j-1]+dp[i-1][j+1])%mod;
		}
	}
	
	for(int i=0;i<=9;i++){
		ans+=dp[n][i];
	}
	
	printf("%lld",ans%mod);
	
	return 0;
}
