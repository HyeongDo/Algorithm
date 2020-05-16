#include<iostream>
#include<queue>
#include<utility>
using namespace std;

int n,m,map[101][101],d[101][101];
char tmp[101][101];
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};

int bfs(){
	queue<pair<int,int> > q;
	q.push(make_pair(0,0));
	while(!q.empty()){
		int nowX=q.front().first;
		int nowY=q.front().second;
		q.pop();
		if(nowX==n-1&&nowY==m-1){
			return d[n-1][m-1]+1;
		}
		for(int i=0;i<4;i++){
			int nextX=nowX+dx[i];
			int nextY=nowY+dy[i];
			if(nextX<0||nextY<0||nextX>=n||nextY>=m) continue;
			if(d[nextX][nextY]) continue;
			if(map[nextX][nextY]==0) continue;
			d[nextX][nextY]=d[nowX][nowY]+1;
			q.push(make_pair(nextX,nextY));
		}
	}
}

int main(void){
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>tmp[i][j];
			map[i][j]=tmp[i][j]-'0';
		}
	}
	cout<<bfs();
	return 0;
}
