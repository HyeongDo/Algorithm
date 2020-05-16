#include<iostream>
#include<queue>
#include<string.h>
#include<vector>
using namespace std;

int n,m,x,y,d[101],ans[101],MIN=1e9;
vector<vector<int> > v;

void bfs(int u){
	queue<int> q;
	q.push(u);
	while(!q.empty()){
		int now=q.front();
		q.pop();
		for(int i=0;i<v[now].size();i++){
			int next=v[now][i];
			if(d[next]) continue;
			d[next]=d[now]+1;
			q.push(next);
		}
	}
}

int main(void){
	cin>>n>>m;
	v.resize(n+1);
	for(int i=0;i<m;i++){
		cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	for(int i=1;i<=n;i++){
		bfs(i);
		for(int j=1;j<=n;j++){
			ans[i]+=d[j];
		}
		memset(d,0,sizeof(d));
		MIN=min(ans[i],MIN);
	}
	for(int i=1;i<=n;i++){
		if(ans[i]==MIN) {
			cout<<i;
			return 0;	
		}
	}
	return 0;
}
