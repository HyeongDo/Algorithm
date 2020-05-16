#include<iostream>
#include<queue>
#include<utility>
#include<string.h>
using namespace std;

int t,l,map[301][301],x,y,tx,ty,ret;
int dx[]={-2,-1,1,2,2,1,-1,-2};
int dy[]={1,2,2,1,-1,-2,-2,-1};

void bfs(){
	queue<pair<int,int> > q;
	q.push(make_pair(x,y));
	while(!q.empty()){
		int nowX=q.front().first;
		int nowY=q.front().second;
		if(nowX==tx&&nowY==ty){
			cout<<map[nowX][nowY]<<endl;
			return;
		}
		ret++;
		q.pop();
		for(int i=0;i<8;i++){
			int nextX=nowX+dx[i];
			int nextY=nowY+dy[i];
			if(nextX<0||nextY<0||nextX>=l||nextY>=l) continue;
			if(map[nextX][nextY]) continue;
			map[nextX][nextY]=map[nowX][nowY]+1;
			q.push(make_pair(nextX,nextY));
		}
	}
}

int main(void){
	cin>>t;
	while(t--){
		cin>>l;
		cin>>x>>y;
		cin>>tx>>ty;
		ret=0;
		bfs();
		memset(map,0,sizeof(map));
	}
	return 0;
}
