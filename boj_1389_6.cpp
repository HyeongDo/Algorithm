#include<iostream>
#include<queue>
#include<vector>
#include<string.h>
using namespace std;

int n,m,x,y,d[101],sum[101],MIN=1e9;
vector<vector<int> > v;
bool chk[101];

void bfs(int num){
	queue<int> q;
	q.push(num);
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
			sum[i]+=d[j];
		}
		MIN=min(sum[i],MIN);
		memset(d,0,sizeof(d));
	}
	
	for(int i=1;i<=n;i++){
		if(MIN==sum[i]){
			cout<<i;
			return 0;
		}
	}
	return 0;
}
