#include<iostream>
#include<queue>
#include<string.h>
using namespace std;

int t,m,n,k,x,y,ans;
bool chk[51][51];
int map[51][51];
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};

void bfs(int x,int y){
	queue<pair<int,int> > q;
	q.push({x,y});
	map[x][y]=0;
	while(!q.empty()){
		int nx=q.front().first;
		int ny=q.front().second;
		q.pop();
		for(int i=0;i<4;i++){
			int xx= nx+dx[i];
			int yy= ny+dy[i];
			if(xx>=0&&yy>=0&&xx<n&&yy<m&&map[xx][yy]){
				q.push({xx,yy});
				map[xx][yy]=0;
			}
		}
	}
}

int main(void){
	cin>>t;
	while(t--){
		cin>>m>>n>>k;
		memset(map,0,sizeof(map));
		for(int i=0;i<k;i++){
			cin>>x>>y;
			map[y][x]=1;
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(map[i][j]){	
					ans++;
					bfs(i,j);	
				}
			}
		}
		cout<<ans<<endl;
		ans=0;
	}
	
	return 0;
}
