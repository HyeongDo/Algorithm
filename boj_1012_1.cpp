#include<iostream>
using namespace std;

int t,m,n,k,a[51][51],cnt;
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};

void dfs(int x,int y){
	a[x][y]=0;
	for(int i=0;i<4;i++){
		int nx=x+dx[i];
		int ny=y+dy[i];
		if(nx<0||ny<0||nx>=n||ny>=m||a[nx][ny]==0) continue;
		dfs(nx,ny);
	}
}

int main(void){
	cin>>t;
	int x,y;
	while(t--){
		cin>>m>>n>>k;
		for(int i=0;i<k;i++){
			cin>>x>>y;
			a[y][x]=1;
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(a[i][j]==1){
					dfs(i,j);
					cnt++;
				}
			}
		}
		cout<<cnt<<endl;
		cnt=0;
	}
	return 0;
}
