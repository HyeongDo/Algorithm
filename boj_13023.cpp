#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

int n,m;
vector< vector<int> > vec;
bool answer,vis[2001];
void dfs(int idx,int cnt){
	if(cnt==4){
		answer=true;
		return;
	}
	vis[idx]=true;
	for(int i=0;i<vec[idx].size();i++){
		int now=vec[idx][i];
		if(vis[now]==false){
			dfs(now,cnt+1);
		}
		if(answer==true) return;
	}
	vis[idx]=false;
}

int main(void){
	ios_base::sync_with_stdio(0);
    cin.tie(0);
	cin>>n>>m;
	vec.resize(n+1);
	int u,v;
	for(int i=0;i<m;i++){
		cin>>u>>v;
		vec[u].push_back(v);
		vec[v].push_back(u);
	}
	for(int i=0;i<n;i++){
		memset(vis,false,sizeof(vis));
		dfs(i,0);
		if(answer==true) break;
	}
	if(answer==true) cout<<1;
	else cout<<0;
	
	return 0;
}
