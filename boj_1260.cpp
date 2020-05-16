#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;

int n,m,v;
bool vD[1001],vB[1001];
queue<int> q;
vector<vector <int> > map;

void dfs(int v){
	vD[v]=true;
	cout<<v<<" ";
	for(int i=0;i<map[v].size();i++){
		if(!vD[map[v][i]]){
			int next=map[v][i];
			dfs(next);
		}
	}
}

void bfs(int v){
	q.push(v);
	vB[v]=true;
	while(!q.empty()){
		int node = q.front();
		q.pop();
		cout<<node<<" ";
		for(int i=0;i<map[node].size();i++){
			if(!vB[map[node][i]]){
				q.push(map[node][i]);
				vB[map[node][i]]=true;
			}
		}
	}
}

int main(void){
	cin>>n>>m>>v;
	int x,y;
	map.resize(n+1);
	for(int i=0;i<m;i++){
		cin>>x>>y;
		map[x].push_back(y);
		map[y].push_back(x);
	}
	for(int i=1;i<=n;i++){
		sort(map[i].begin(),map[i].end());
	}
	
	dfs(v);
	cout<<"\n";
	bfs(v);
	
	return 0;
}
