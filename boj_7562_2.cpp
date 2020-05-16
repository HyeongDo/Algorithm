#include<iostream>
#include<queue>
#include<utility>
#include<string.h>
using namespace std;

int t,l,x,y,tx,ty,d[301][301];
int dx[]={-2,-1,1,2,2,1,-1,-2};
int dy[]={1,2,2,1,-1,-2,-2,-1};

void bfs(){
	queue<pair<int,int> > q;
	q.push(make_pair(x,y));
	while(!q.empty()){
		int nowX=q.front().first;
		int nowY=q.front().second;
		q.pop();
		if(nowX==tx&&nowY==ty){
			cout<<d[nowX][nowY]<<endl;
			return;
		}
		for(int i=0;i<8;i++){
			int nextX=nowX+dx[i];
			int nextY=nowY+dy[i];
			if(nextX<0||nextY<0||nextX>=l||nextY>=l) continue;
			if(d[nextX][nextY]) continue;
			d[nextX][nextY]=d[nowX][nowY]+1;
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
		bfs();
		memset(d,0,sizeof(d));
	}
	
	return 0;
}
