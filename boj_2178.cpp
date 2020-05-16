#include<iostream>
#include<utility>
#include<queue>
using namespace std;

int n,m,inp[101][101];
char tmp[101][101];
queue<pair<int,int> > q;
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};

void bfs(int x,int y){
	q.push({x,y});
	while(!q.empty()){
		int nowX=q.front().first;
		int nowY=q.front().second;
		q.pop();
		for(int i=0;i<4;i++){
			int nextX=nowX+dx[i];
			int nextY=nowY+dy[i];
			if(nextX<0||nextY<0||nextX>=n||nextY>=m||inp[nextX][nextY]==0) continue;
			if(inp[nextX][nextY]==1){
				q.push({nextX,nextY});
				inp[nextX][nextY]=inp[nowX][nowY]+1;
			}
		}
	}
}

int main(void){
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>tmp[i][j];
			inp[i][j]=tmp[i][j]-'0';
		}
	}
	bfs(0,0);
	cout<<inp[n-1][m-1];
	
	return 0;
}
