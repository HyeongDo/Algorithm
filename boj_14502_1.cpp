#include<iostream>
#include<string.h>
using namespace std;

int n,m,map[10][10],one,ans=1e9;
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
bool visit[10][10];

int dfs(int x,int y){
	int ret=1;
	visit[x][y]=true;
	for(int i=0;i<4;i++){
		int nextX=x+dx[i];
		int nextY=y+dy[i];
		if(nextX<0||nextY<0||nextX>=n||nextY>=m||visit[nextX][nextY]==true) continue;
		if(map[nextX][nextY]==0){
			ret+=dfs(nextX,nextY);
		}
	}
	return ret;
}

int solve(int ix,int iy,int jx,int jy,int kx,int ky){
	map[ix][iy]=1,map[jx][jy]=1,map[kx][ky]=1;
	int ret=0;
	memset(visit,false,sizeof(visit));
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(map[i][j]==2&&visit[i][j]==false){
				ret+=dfs(i,j);
			}
		}
	}
	map[ix][iy]=0,map[jx][jy]=0,map[kx][ky]=0;
	return ret;
}

int main(void){
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>map[i][j];
			if(map[i][j]==1) one++;
		}
	}
	for(int ix=0;ix<n;ix++){
		for(int iy=0;iy<m;iy++){
			for(int jx=0;jx<n;jx++){
				for(int jy=0;jy<m;jy++){
					for(int kx=0;kx<n;kx++){
						for(int ky=0;ky<m;ky++){
							if(map[ix][iy]||map[jx][jy]||map[kx][ky]) continue;
							ans=min(ans,solve(ix,iy,jx,jy,kx,ky));
						}
					}
				}
			}
		}
	}
	cout<<n*m-3-one-ans;
	return 0;
}
