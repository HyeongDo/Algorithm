#include<iostream>
using namespace std;

int n,m[11][11],MIN=10000000;
bool ck[11];

void dfs(int s,int e,int cnt,int sum){
	
	if(cnt==n&&s==e){
		MIN=min(MIN,sum);
		return;
	}
	
	for(int i=0;i<n;i++){
		if(m[e][i]==0) continue;
		if(ck[e]==false && m[e][i]>0){
			ck[e]=true;
			sum+=m[e][i];
			
			if(sum<=MIN){
				dfs(s,i,cnt+1,sum);
			}
			ck[e]=false;
			sum-=m[e][i];
		}
	}
}

int main(void){
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>m[i][j];//시작은 start와 end가 같다 
		}
	}
	
	for(int i=0;i<n;i++){
		dfs(i,i,0,0);
	}
	
	cout<<MIN;
	
	return 0;
}
