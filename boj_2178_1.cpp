#include<iostream>
#include<queue>
#include<utility>
using namespace std;

int n,m,dist[101][101];
char a[101][101];
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
bool chk[101][101];

void bfs(){
	queue<pair<int,int> > q;
	q.push(make_pair(0,0));
	chk[0][0]=true;
	dist[0][0]=1;
	while(!q.empty()){
		int nowX=q.front().first;
		int nowY=q.front().second;
		q.pop();
		for(int i=0;i<4;i++){
			int nextX=nowX+dx[i];
			int nextY=nowY+dy[i];
			if(nextX<0||nextX>=n||nextY<0||nextY>=m) continue;
			if(a[nextX][nextY]=='1'&&chk[nextX][nextY]==false){
				dist[nextX][nextY]=dist[nowX][nowY]+1;
				chk[nextX][nextY]=true;
				q.push(make_pair(nextX,nextY));
			}
		}
	}
}

int main(void){
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
	bfs();
	cout<<dist[n-1][m-1];
	return 0;
}
