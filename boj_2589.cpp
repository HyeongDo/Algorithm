#include<iostream>
#include<queue>
#include<utility>
#include<string.h>
using namespace std;

int n,m,MAX,ans,d[51][51];
char map[51][51];
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
bool chk[51][51];

int bfs(int x,int y){
	queue<pair<int,int> > q;
	q.push(make_pair(x,y));
	chk[x][y]=true;
	while(!q.empty()){
		int nowX=q.front().first;
		int nowY=q.front().second;
		q.pop();
		for(int i=0;i<4;i++){
			int nextX=nowX+dx[i];
			int nextY=nowY+dy[i];
			if(d[nextX][nextY]) continue;
			if(nextX<0||nextY<0||nextX>=n||nextY>=m) continue;
			if(map[nextX][nextY]=='W') continue;
			if(chk[nextX][nextY]==true) continue;
			q.push(make_pair(nextX,nextY));
			d[nextX][nextY]=d[nowX][nowY]+1;
			chk[nextX][nextY]=true;
			if(MAX<d[nextX][nextY]) MAX=d[nextX][nextY];
		}
	}
	memset(chk,false,sizeof(chk));
	memset(d,0,sizeof(d));
	return MAX;
}

int main(void){
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>map[i][j];
		}
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(map[i][j]=='L'){
				ans=max(ans,bfs(i,j));
			}
		}
	}
	
	cout<<ans;
	return 0;
}
