#include<iostream>
#include<string.h>
#include<queue>
#include<utility>
using namespace std;

int n,map[101][101],mark=1,MIN=1e9,d[101][101],c;
bool chk[101][101];
int dx[]={1,0,-1,0};
int dy[]={0,1,0,-1};

void marking(int x,int y){
	map[x][y]=mark;
	chk[x][y]=true;
	for(int i=0;i<4;i++){
		int nextX=x+dx[i];
		int nextY=y+dy[i];
		if(nextX<0||nextY<0||nextX>=n||nextY>=n) continue;
		if(chk[nextX][nextY]==true) continue;
		if(map[nextX][nextY]==0) continue;
		marking(nextX,nextY);
	}
}

void bfs(int markk){
	queue<pair<int,int > > q;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(map[i][j]==markk){
				q.push(make_pair(i,j));
				d[i][j]=0;
			}
		}
	}
	while(!q.empty()){
		int x=q.front().first;
		int y=q.front().second;
		q.pop();
		for(int i=0;i<4;i++){
			int nextX=x+dx[i];
			int nextY=y+dy[i];
			if(nextX<0||nextY<0||nextX>=n||nextY>=n) continue;
			if(map[nextX][nextY]&&map[nextX][nextY]!=markk){
				MIN=min(MIN,d[x][y]);
				return;
			}
			if(!map[nextX][nextY]&&d[nextX][nextY]==0){
				d[nextX][nextY]=d[x][y]+1;
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
			if(map[i][j]>=1&&chk[i][j]==false){			
				marking(i,j);
				mark++;	
			}
		}
	}
	
	memset(chk,false,sizeof(chk));
	for(int k=1;k<=mark-1;k++){
		memset(d,0,sizeof(d));
		bfs(k);
	}
	cout<<MIN;
	return 0;
}
