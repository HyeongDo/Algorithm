#include<cstdio>
#include<algorithm>
using namespace std;

int n,ans;
int dp[1001][3];
int cost[1001][3];

int main(void){
	
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d %d %d",&cost[i][0],&cost[i][1],&cost[i][2]);
	}
	
	for(int i=1;i<=n;i++){
		dp[i][0]=min(dp[i-1][1],dp[i-1][2])+cost[i][0];
		dp[i][1]=min(dp[i-1][0],dp[i-1][2])+cost[i][1];
		dp[i][2]=min(dp[i-1][0],dp[i-1][1])+cost[i][2];
	}
	
	ans = min(min(dp[n][0],dp[n][1]),dp[n][2]);
	
	printf("%d",ans);
	
	return 0;
}
