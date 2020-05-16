#include<iostream>
using namespace std;

int n,s,num[21],ans;

void dfs(int sum,int i){
	if(sum+num[i]==s) ans++;
	if(i+1==n) return;	
	dfs(sum,i+1);
	dfs(sum+num[i],i+1);
}

int main(void){
	cin>>n>>s;
	for(int i=0;i<n;i++) cin>>num[i];
	dfs(0,0);
	cout<<ans;
	return 0;
}
