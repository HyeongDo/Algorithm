#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int n,c,tc,m,x,y;
vector<vector<int> > v;
int chk[101];

void bfs(){
	queue<int> q;
	q.push(c);
	int cnt=0;
	while(!q.empty()){
		int now=q.front();
		if(now==tc){
			cout<<chk[now];
			return;
		}
		q.pop();
		for(int i=0;i<v[now].size();i++){
			int next=v[now][i];
			if(chk[next]) continue;
			chk[next]=chk[now]+1;
			q.push(next);
		}
	}
}

int main(void){
	cin>>n;
	cin>>c>>tc;
	cin>>m;
	v.resize(n+1);
	for(int i=0;i<m;i++){
		cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	bfs();
	if(chk[tc]==0){
		cout<<-1;
	}
	return 0;
}
