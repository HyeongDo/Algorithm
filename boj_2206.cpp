#include<iostream>
#include<queue>
#include<utility>
using namespace std;

int n,m,dist[1001][1001][2];
int inp[1001][1001];
queue<pair<pair<int,int> ,int > > q;
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};

int bfs(){
	q.push(make_pair(make_pair(0,0),0));
	while(!q.empty()){
		int nowX=q.front().first.first;
		int nowY=q.front().first.second;
		int nowF=q.front().second;
		q.pop();
		if(nowX==n-1&&nowY==m-1){
			return dist[nowX][nowY][nowF]+1;
		}
		for(int i=0;i<4;i++){
			int nextX=nowX+dx[i];
			int nextY=nowY+dy[i];
			if(nextX<0||nextY<0||nextX>=n||nextY>=m) continue;
			if(dist[nextX][nextY][nowF]) continue;
			if(inp[nextX][nextY]==0){
				dist[nextX][nextY][nowF]=dist[nowX][nowY][nowF]+1;
				q.push(make_pair(make_pair(nextX,nextY),nowF));
			}
			if(inp[nextX][nextY]==1&&nowF==0){
				dist[nextX][nextY][1]=dist[nowX][nowY][nowF]+1;
				q.push(make_pair(make_pair(nextX,nextY),1));
			}
		}
	}
	return -1;
}

int main(void){
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%1d",&inp[i][j]);
		}
	}
	cout<<bfs();
	return 0;
}
