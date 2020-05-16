#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#include<string.h>
using namespace std;

int n,m,u;
vector<vector<int> > v;
bool chk[1001];

void dfs(int c){
	chk[c]=true;
	cout<<c<<" ";
	for(int i=0;i<v[c].size();i++){
		int next=v[c][i];
		if(chk[next]==false){
			dfs(next);
		}
	}
}

void bfs(int c){
	queue<int> q;
	q.push(c);
	while(!q.empty()){
		int now=q.front();
		q.pop();
		cout<<now<<" ";
		chk[now]=true;
		for(int i=0;i<v[now].size();i++){
			int next=v[now][i];
			if(chk[next]==false){
				q.push(next);
				chk[next]=true;
			}
		}
	}
}

int main(void){
	cin>>n>>m>>u;
	v.resize(n+1);
	int x,y;
	for(int i=0;i<m;i++){
		cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	for(int i=1;i<n;i++){
		sort(v[i].begin(),v[i].end());
	}
	dfs(u);
	cout<<endl;
	memset(chk,false,sizeof(chk));
	bfs(u);
	return 0;
}
