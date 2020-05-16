#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;

int n,m,v;
vector<int> vec[1001];
queue<int> q;
bool chkD[1001],chkB[1001];

void dfs(int now){
	chkD[now]=true;
	cout<<now<<" ";
	for(int i=0;i<vec[now].size();i++){
		int next=vec[now][i];
		if(chkD[next]==false){
			dfs(next);
		}
	}
}

void bfs(int now){
	chkB[now]=true;
	q.push(now);
	while(!q.empty()){
		int temp=q.front();
		q.pop();
		cout<<temp<<" ";
		for(int i=0;i<vec[temp].size();i++){
			int next=vec[temp][i];
			if(chkB[next]==false){
				q.push(next);
				chkB[next]=true;
			}
		}
	}
}

int main(void){
	cin>>n>>m>>v;
	int x,y;
	for(int i=0;i<m;i++){
		cin>>x>>y;
		vec[x].push_back(y);
		vec[y].push_back(x);
	}
	for(int i=0;i<m;i++){
		sort(vec[i].begin(),vec[i].end());
	}
	dfs(v);
	cout<<endl;
	bfs(v);
	return 0;
}
