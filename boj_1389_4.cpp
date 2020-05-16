#include<iostream>
#include<queue>
#include<string.h>
#include<vector>
using namespace std;

int n,m,x,y,d[101],MIN=1e9,ans[101];
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
	while(m--){
		cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	for(int i=1;i<=n;i++){
		bfs(i);
		for(int j=1;j<=n;j++){
			if(i!=j){
				ans[i]+=d[j];//1~n까지 시작부터 더하기 
			}
		}
		MIN=min(ans[i],MIN);//더한것최솟값구하기
		memset(d,false,sizeof(d));//더하는도구초기화 
	}
	for(int i=1;i<=n;i++){
		if(MIN==ans[i]){//같은곳나오면그것의n값구하기 
			cout<<i;
			return 0;
		}
	}
	return 0;
}
