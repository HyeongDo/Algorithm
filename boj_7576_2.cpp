#include<iostream>
#include<queue>
#include<utility>
using namespace std;

int m,n,a[1001][1001],ans;
queue<pair<int,int> > q;
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};

void bfs(void){
	while(!q.empty()){
		int nowX=q.front().first;
		int nowY=q.front().second;
		q.pop();
		for(int i=0;i<4;i++){
			int nextX=nowX+dx[i];
			int nextY=nowY+dy[i];
			if(nextX<0||nextY<0||nextX>=n||nextY>=m) continue;
			if(a[nextX][nextY]==0){
				q.push( {nextX, nextY} );
				a[nextX][nextY]=a[nowX][nowY]+1;
			}
		}
	}
}

int main(void){
	cin>>m>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
			if(a[i][j]==1){
				q.push({i,j});
			}
		}
	}
	bfs();
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(a[i][j]==0){
				cout<<"-1";
				return 0;
			}
			ans=max(ans,a[i][j]);
		}
	}
	cout<<ans;
	return 0;
}
