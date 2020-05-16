#include<iostream>
#include<queue>
#include<string.h>
#include<utility>
using namespace std;

int l,t,a[301][301],x,y,targetX,targetY;
int dx[]={1,2,2,1,-1,-2,-2,-1};
int dy[]={-2,-1,1,2,2,1,-1,-2};

void bfs(){
	queue<pair<int,int> > q;
	q.push(make_pair(x,y));
	while(!q.empty()){
		int nowX=q.front().first;
		int nowY=q.front().second;
		q.pop();
		if(nowX==targetX&&nowY==targetY){
			cout<<a[nowX][nowY]<<endl;
			return;
		}
		for(int i=0;i<8;i++){
			int nextX=nowX+dx[i];
			int nextY=nowY+dy[i];
			if(nextX<0||nextY<0||nextX>=t||nextY>=t) continue;
			if(a[nextX][nextY]) continue;
			a[nextX][nextY]=a[nowX][nowY]+1;
			q.push(make_pair(nextX,nextY));
		}
	}
}

int main(void){
	cin>>l;
	while(l--){
		cin>>t;
		cin>>x>>y;
		cin>>targetX>>targetY;
		memset(a,0,sizeof(a));
		bfs();
	}
	return 0;
}
