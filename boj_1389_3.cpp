#include<iostream>
#include<queue>
#include<vector>
#include<string.h>
using namespace std;

int n,m,x,y,Big=1e9,ans[101];
vector<vector<int> > v;
int chk[101];

void bfs(int u){
	queue<int> q;
	q.push(u);
	int cnt=0;
	while(!q.empty()){
		int now=q.front();
		q.pop();
		for(int i=0;i<v[now].size();i++){
			int next=v[now][i];
			if(chk[next]==0){
				q.push(next);
				chk[next]=chk[now]+1;
			}
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
			if(i!=j){
				ans[i]+=chk[j];
			}
		}
		if(ans[i]<Big){
			Big=ans[i];
		}
		memset(chk,false,sizeof(chk));
	}
	for(int i=1;i<=n;i++){
		if(Big==ans[i]){
			cout<<i;
			break;
		}
	}
	return 0;
}
