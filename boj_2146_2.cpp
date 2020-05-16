#include<iostream>
#include<queue>
#include<utility>
#include<string.h>
using namespace std;

int n,d[101][101],map[101][101],mark=1,ans=1e9;
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
bool chk[101][101];

void dfs(int x,int y){
	map[x][y]=mark;
	chk[x][y]=true;
	for(int i=0;i<4;i++){
		int nextX=x+dx[i];
		int nextY=y+dy[i];
		if(nextX<0||nextY<0||nextX>=n||nextY>=n) continue;
		if(chk[nextX][nextY]==true) continue;
		if(map[nextX][nextY]>0){
			dfs(nextX,nextY);
		}
	}
}

void bfs(int marking){
	queue<pair<int,int> > q;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(map[i][j]==marking){
				q.push(make_pair(i,j));
			}
		}
	}
	while(!q.empty()){
		int nowX=q.front().first;
		int nowY=q.front().second;
		q.pop();
		for(int i=0;i<4;i++){
			int nextX=nowX+dx[i];
			int nextY=nowY+dy[i];
			if(map[nextX][nextY]==marking) continue;
			if(nextX<0||nextY<0||nextX>=n||nextY>=n) continue;
			if(d[nextX][nextY]) continue;
			if(map[nextX][nextY]>0){
				ans=min(ans,d[nowX][nowY]);
			}
			else if(map[nextX][nextY]==0){
				d[nextX][nextY]=d[nowX][nowY]+1;
				q.push(make_pair(nextX,nextY));
			}
		}
	}
}

int main(void){
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>map[i][j];
		}
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(map[i][j]>0&&chk[i][j]==false){
				dfs(i,j);
				mark++;
			}
		}
	}
	for(int i=1;i<=mark;i++){
		memset(d,0,sizeof(d));
		bfs(i);
	}
	cout<<ans;
	
	return 0;
}
