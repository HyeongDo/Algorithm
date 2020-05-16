#include<iostream>
#include<string.h>
using namespace std;

int n,map[101][101],MAX,safe,cnt;
bool chk[101][101];
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};

void dfs(int x,int y,int Max){
	chk[x][y]=true;
	for(int i=0;i<4;i++){
		int nextX=x+dx[i];
		int nextY=y+dy[i];
		if(nextX<0||nextY<0||nextX>=n||nextY>=n||
		map[nextX][nextY]<Max||chk[nextX][nextY]==true) continue;
		dfs(nextX,nextY,Max);
	}
}

int main(void){
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>map[i][j];
			MAX=max(MAX,map[i][j]);
		}
	}
	
	for(int i=0;i<=MAX;i++){
		for(int j=0;j<n;j++){
			for(int k=0;k<n;k++){
				if(map[j][k]>=i&&chk[j][k]==false){
					dfs(j,k,i);
					cnt++;
				}
			}
		}
		safe=max(cnt,safe);
		cnt=0;
		memset(chk,false,sizeof(chk));
	}
	cout<<safe;
	return 0;
}
