#include<iostream>
#include<string.h>
using namespace std;

int n,m,map[10][10],MAX;
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
bool chk[10][10];

void dfs(int x,int y){
	chk[x][y]=true;
	for(int i=0;i<4;i++){
		int nextX=x+dx[i];
		int nextY=y+dy[i];
		if(nextX<0||nextY<0||nextX>=n||nextY>=m) continue;
		if(map[nextX][nextY]==0&&chk[nextX][nextY]==false){
			dfs(nextX,nextY);
		}
	}
}

int solve(int ix,int iy,int jx,int jy,int kx,int ky){
	map[ix][iy]=1,map[jx][jy]=1,map[kx][ky]=1;
	int cnt=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(map[i][j]==2&&chk[i][j]==false){
				dfs(i,j);
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(map[i][j]==0&&chk[i][j]==false){
				cnt++;
			}
		}
	}
	memset(chk,false,sizeof(chk));
	map[ix][iy]=0,map[jx][jy]=0,map[kx][ky]=0;
	return cnt;
}

int main(void){
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>map[i][j];
		}
	}
	
	for(int ix=0;ix<n;ix++){
		for(int iy=0;iy<m;iy++){
			for(int jx=0;jx<n;jx++){
				for(int jy=0;jy<m;jy++){
					for(int kx=0;kx<n;kx++){
						for(int ky=0;ky<m;ky++){
							if(ix==jx&&iy==jy
							||jx==kx&&jy==ky
							||kx==ix&&ky==iy) continue;
							if(map[ix][iy]||map[jx][jy]||map[kx][ky]) continue;
							MAX=max(MAX,solve(ix,iy,jx,jy,kx,ky));
						}
					}
				}
			}
		}
	}
	cout<<MAX;
	return 0;
}
