#include<iostream>
#include<vector>
using namespace std;

int n,m,cnt;
vector<vector<int> > p;
vector<bool> vis;

void dfs(int v){
	vis[v]=true;
	for(int i=0;i<p[v].size();i++){
		int next=p[v][i];
		if(!vis[next]){
			dfs(next);
		}
	}
}

int main(void){
	cin>>n>>m;
	p.resize(n+1);
	vis.resize(n+1);
	int u,v;
	for(int i=0;i<m;i++){
		cin>>u>>v;
		p[u].push_back(v);
		p[v].push_back(u);
	}
	for(int i=1;i<=n;i++){
			if(!vis[i]){
				dfs(i);
				cnt++;
			}	
		
	}
	cout<<cnt;
	return 0;
}
