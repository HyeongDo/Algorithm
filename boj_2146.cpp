#include<iostream>
#include<queue>
#include<string.h>
#include<utility>
using namespace std;

int n,a[101][101],k=1,ans=1e9,dist[101][101];
bool chk[101][101];
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};

void dfs(int x,int y){
	chk[x][y]=true;
	a[x][y]=k;
	for(int i=0;i<4;i++){
		int nextX=x+dx[i];
		int nextY=y+dy[i];
		if(nextX<0||nextX>=n||nextY<0||nextY>=n) continue;
		if(!chk[nextX][nextY]&&a[nextX][nextY]){
			dfs(nextX,nextY);
		}
	}
}

void bfs(int z){
	queue<pair<int,int> > q;
	memset(dist,-1,sizeof(dist));
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(a[i][j]==z){
				q.push(make_pair(i,j));
				dist[i][j]=0;
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
			if(a[nextX][nextY]&&a[nextX][nextY]!=z){
				if(ans>dist[x][y]) ans=dist[x][y];
				return;
			}
			if(!a[nextX][nextY]&&dist[nextX][nextY]==-1){
				dist[nextX][nextY]=dist[x][y]+1;
				q.push(make_pair(nextX,nextY));
			}
		}
	}
}

int main(void){
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(!chk[i][j]&&a[i][j]){
				dfs(i,j);
				k++;
			}
		}
	}
	for(int i=1;i<=k;i++){
		bfs(i);
	}
	cout<<ans;
	return 0;
}
