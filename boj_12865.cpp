#include<iostream>
#include<algorithm>
using namespace std;

int n,k;
int dp[101][100001];
pair<int,int> p[100001];

int main(void){
	cin>>n>>k;
	
	for(int i=0;i<n;i++){
		cin>>p[i].first>>p[i].second;
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<=k;j++){
			if(i==0){//ÃÊ±âÈ­ 
				if(p[i].first<=j){
					dp[i][j]=p[i].second;
				}
				continue;
			}
			if(p[i].first<=j){
				dp[i][j]=max(dp[i-1][j],p[i].second+dp[i][j-p[i].first]);
			}else{
				dp[i][j]=dp[i-1][j];
			}
		}
	}
	
	cout<<dp[n-1][k];
	
	return 0;
}
 
