#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int n,m,v[9],u[9];
bool ck[10001];

void dfs(int cnt){
	if(cnt==m){
		for(int i=0;i<m;i++){
			cout<<u[i]<<" ";
		}
		cout<<"\n";
		return;
	}
	
	for(int i=0;i<n;i++){
		if(ck[v[i]]==true) continue;
		u[cnt]=v[i];
		ck[v[i]]=true;
		dfs(cnt+1);
		ck[v[i]]=false;
	}
}

int main(void){
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	sort(v,v+n);
	dfs(0);
	return 0;
}
