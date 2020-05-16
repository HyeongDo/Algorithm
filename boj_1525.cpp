#include<iostream>
#include<queue>
#include<map>
#include<algorithm>
#include<string>
using namespace std;

queue<int> q;
int dx[]={1,-1,0,0};
int dy[]={0,0,1,-1};
map<int,int> d;

void bfs(){
	while(!q.empty()){
		int now=q.front(); q.pop();
		
		if(now==123456789){
			cout<<d[now];
			return;
		}
		
		string s= to_string(now);
		int k=s.find('9');
		int x=k/3, y=k%3;
		for(int i=0;i<4;i++){
			int nx=x+dx[i],ny=y+dy[i];
			if(nx<0||nx>=3||ny<0||ny>=3) continue;
			int nk=nx*3+ny;
			string ns=s;
			swap(ns[k],ns[nk]);
			int nd=stoi(ns.c_str());
			if(!d[nd]){
				d[nd]=d[now]+1;
				q.push(nd);
			}
		}
	}
	
	
	cout<<-1;
}

int main(void){
	int n,m=0;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin>>n;
			if(!n) n=9;
			m=m*10+n;
		}
	}
	q.push(m);
	bfs();
	return 0;
}
