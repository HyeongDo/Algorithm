#include<iostream>
using namespace std;

int n,t[16],p[16],mx;

void dfs(int time,int sum){
	if(time==n){
		mx=max(mx,sum);
		return;
	}
	
	if(time+1<=n) dfs(time+1,sum);
	if(time+t[time]<=n) dfs(time+t[time],sum+p[time]);
	
}

int main(void){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>t[i]>>p[i];
	}
	dfs(0,0);
	cout<<mx;
	return 0;
}
