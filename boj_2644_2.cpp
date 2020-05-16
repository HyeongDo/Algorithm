#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int n,x,y,m,tx,ty,d[101];
vector<vector<int> > v;
bool chk[101];

int bfs(){
	queue<int> q;
	q.push(tx);
	while(!q.empty()){
		int now=q.front();
		q.pop();
		if(now==ty){
			return d[now];
		}
		for(int i=0;i<v[now].size();i++){
			int next=v[now][i];
			if(chk[next]==false){
				if(d[next]) continue;
				chk[now]=true;
				d[next]=d[now]+1;
				q.push(next);
			}
		}
	}
	return -1;
}

int main(void){
	cin>>n;
	cin>>tx>>ty;
	cin>>m;
	v.resize(n+1);
	while(m--){
		cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	cout<<bfs();
	return 0;
}
