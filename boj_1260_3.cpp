#include<iostream>
#include<algorithm>
#include<queue>
#include<vector>
#include<string.h>
using namespace std;

int n,m,v,x,y;
vector<vector<int> > vec;
bool chk[1001];

void dfs(int num){
	chk[num]=true;
	cout<<num<<" ";
	for(int i=0;i<vec[num].size();i++){
		int next=vec[num][i];
		if(chk[next]==false){
			dfs(next);
		}
	}
}

void bfs(int num){
	queue<int> q;
	q.push(num);
	chk[num]=true;
	while(!q.empty()){
		int now = q.front();
		cout<<now<<" ";
		q.pop();
		for(int i=0;i<vec[now].size();i++){
			int next=vec[now][i];
			if(chk[next]==false){
				chk[next]=true;
				q.push(next);
			}
		}
	}
}

int main(void){
	cin>>n>>m>>v;
	vec.resize(n+1);
	for(int i=0;i<m;i++){
		cin>>x>>y;
		vec[x].push_back(y);
		vec[y].push_back(x);
	}
	for(int i=0;i<n;i++){
		sort(vec[i].begin(),vec[i].end());
	}
	dfs(v);
	cout<<endl;
	memset(chk,false,sizeof(chk));
	bfs(v);
	return 0;
}
