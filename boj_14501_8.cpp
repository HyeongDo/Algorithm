#include<iostream>
using namespace std;

int n,t[15],p[15],ans;

void dfs(int i,int sum){
	if(i==n) {
		ans=max(ans,sum);
		return;	
	}
	if(i+t[i]<=n){//i일에 일 할 경우 
		dfs(i+t[i],sum+p[i]);
	}
	if(i+1<=n){//i일에 일 안 하고 다음 날로 넘어갈 경우 
		dfs(i+1,sum);
	}
}

int  main(void){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>t[i]>>p[i];
	}
	dfs(0,0);
	cout<<ans;
	return 0;
}
