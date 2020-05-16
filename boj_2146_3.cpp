#include<iostream>
#include<queue>
#include<utility>
#include<string.h>
using namespace std;

int n,map[101][101],d[101][101],mark=1,MIN=1e9;
bool chk[101][101];
int dx[]={1,0,-1,0};
int dy[]={0,1,0,-1};

void dfs(int x,int y){
	chk[x][y]=true;
	map[x][y]=mark;
	for(int i=0;i<4;i++){
		int nextX=x+dx[i];
		int nextY=y+dy[i];
		if(nextX<0||nextY<0||nextX>=n||nextY>=n) continue;
		if(map[nextX][nextY]==0) continue;
		if(chk[nextX][nextY]==true) continue;
		dfs(nextX,nextY);
	}
}

void bfs(int mk){
	queue<pair<int,int> > q;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(map[i][j]==mk){
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
			if(nextX<0||nextY<0||nextX>=n||nextY>=n) continue;
			if(map[nextX][nextY]==mk) continue;
			if(d[nextX][nextY]) continue;
			if(map[nextX][nextY]>0){
				MIN=min(MIN,d[nowX][nowY]);
			}else{	
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
	cout<<MIN;
		
	return 0;
}
