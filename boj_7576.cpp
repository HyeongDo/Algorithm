#include<iostream>
#include<queue>
using namespace std;

int m,n,map[1001][1001],ans;
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
queue<pair<int,int> > q;

void bfs(){
	while(!q.empty()){
		int nx=q.front().first;
		int ny=q.front().second;
		q.pop();
		for(int i=0;i<4;i++){
			int xx=nx+dx[i];
			int yy=ny+dy[i];
			if(xx>=0&&yy>=0&&xx<n&&yy<m&&map[xx][yy]==0){
				map[xx][yy]=map[nx][ny]+1;
				q.push({xx,yy});
			}
		}
	}
}

int main(void){
	cin>>m>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>map[i][j];
			if(map[i][j]==1){
				q.push({i,j});
			}
		}
	}
	
	bfs();
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(map[i][j]==0){
				cout<<-1;
				return 0;
			}
			ans = max(ans,map[i][j]);
		}
	}
	
	cout<<ans-1;
	
	return 0;
}
