#include<iostream>
using namespace std;

int n,m,v[9],k[9];

void dfs(int cnt,int u){
	if(cnt==m){
		for(int i=0;i<m;i++){
			cout<<v[i]<<" ";
		}
		cout<<"\n";
	}
	for(int i=u;i<n;i++){
		v[cnt]=k[i];
		dfs(cnt+1,i+1);	
	}
}

int main(void){
	cin>>n>>m;
	for(int i=0;i<n;i++){
		k[i]=i+1;
	}
	dfs(0,0);
	return 0;
}
