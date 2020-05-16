#include<iostream>
#include<queue>
#include<utility>
using namespace std;

int t,m,n,k,x,y,cnt;
int a[51][51];
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
queue<pair<int,int> > q;

void bfs(int x,int y){
	a[x][y]=0;
	q.push({x,y});
	while(!q.empty()){
		int nowX=q.front().first;
		int nowY=q.front().second;
		q.pop();
		for(int i=0;i<4;i++){
			int nx=nowX+dx[i];
			int ny=nowY+dy[i];
			if(nx<0||ny<0||nx>=n||ny>=m||a[nx][ny]==0) continue;
			q.push({nx,ny});
			a[nx][ny]=0;
		}
	}
}

int main(void){
	cin>>t;
	while(t--){
		cin>>m>>n>>k;
		for(int i=0;i<k;i++){
			cin>>x>>y;
			a[y][x]=1;
		}
		
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(a[i][j]==1){
					bfs(i,j);
					cnt++;
				}
			}
		}
		cout<<cnt<<endl;
		cnt=0;
	}
	
	return 0;
}
