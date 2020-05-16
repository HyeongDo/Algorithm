#include<iostream>
#include<string.h>
using namespace std;

int n,m,map[10][10],cnt,MAX=-1;
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
bool chk[10][10];

void dfs(int x,int y){
	chk[x][y]=true;
	for(int i=0;i<4;i++){
		int nextX=x+dx[i];
		int nextY=y+dy[i];
		if(nextX<0||nextY<0||nextX>=n||nextY>=m||chk[nextX][nextY]==true) continue;
		if(map[nextX][nextY]==0||map[nextX][nextY]==2){
			dfs(nextX,nextY);
		}
	}
}

void solve(int ii,int ij,int ji,int jj,int ki,int kj){
	map[ii][ij]=1,map[ji][jj]=1,map[ki][kj]=1;
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
	map[ii][ij]=0,map[ji][jj]=0,map[ki][kj]=0;
}

int main(void){
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>map[i][j];
		}
	}
	
	for(int ii=0;ii<n;ii++){
		for(int ij=0;ij<m;ij++){
			for(int ji=0;ji<n;ji++){
				for(int jj=0;jj<m;jj++){
					for(int ki=0;ki<n;ki++){
						for(int kj=0;kj<m;kj++){
							if(ii==ji&&ij==jj
							||ji==ki&&jj==kj
							||ki==ii&&kj==ij) continue;
							if(map[ii][ij]||map[ji][jj]||map[ki][kj]) continue;
							solve(ii,ij,ji,jj,ki,kj);
							MAX=max(MAX,cnt); 
							cnt=0;
						}
					}
				}
			}
		}
	}
	cout<<MAX;
	return 0;
}
