#include<iostream>
#include<algorithm>
#include<utility>
using namespace std;

int n,cnt,dp[101],i,j,MIN,MAX;
pair<int,int> pr[101];

int main(void){
	cin>>n;
	
	for(i=0;i<n;i++){
		scanf("%d %d",&pr[i].first,&pr[i].second);
		dp[i]=1;
	}
	
	sort(pr,pr+n);
	
	for(i=1;i<n;i++){
		for(j=0;j<i;j++){
			if(pr[i].second>pr[j].second&&dp[i]<dp[j]+1){
				dp[i]=dp[j]+1;
			}
		}
		if(MAX<dp[i]) MAX=dp[i];
	}
	
	printf("%d",n-MAX);
	
	return 0;
}
