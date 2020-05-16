#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;

int n,m,v;
queue<int> q;
vector<vector<int> > vec;
bool cD[1001], cB[1001];

void dfs(int v){
	cout<<v<<" ";
	cD[v]=true;
	for(int i=0;i<vec[v].size();i++){
		if(!cD[i]){
			int next=vec[v][i];
			dfs(next);
		}
	}
}

void bfs(int v){
	q.push(v);
	cB[v]=true;
	while(!q.empty()){
		int x=q.front();
		cout<<x<<" ";
		q.pop();
		for(int i=0;i<vec[x].size();i++){
			if(!cB[i]){
				q.push(vec[x][i]);
				cB[x]=true;
			}
		}
	}
}

int main(void){
	cin>>n>>m>>v;
	int x,y;
	vec.resize(n+1);
	for(int i=0;i<m;i++){
		cin>>x>>y;
		vec[x].push_back(y);
		vec[y].push_back(x);
	}
	dfs(v);
	cout<<"\n";
	bfs(v);
	
	
	return 0;
}
