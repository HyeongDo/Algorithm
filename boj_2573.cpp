#include<iostream>
#include<string.h>
using namespace std;

int n,m,map[301][301],c=0,year=0;
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
bool vis[301][301];

void chk(void){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(map[i][j]!=0&&vis[i][j]==false){
				for(int k=0;k<4;k++){
					int minusX=i+dx[k];
					int minusY=j+dy[k];
					if(minusX<0||minusY<0||minusX>=n||minusY>=m
					||vis[minusX][minusY]==true) continue;
					if(map[minusX][minusY]==0&&map[i][j]>0){
						map[i][j]=map[i][j]-1;
					}
				}
				vis[i][j]=true;
			}
		}
	}
	memset(vis,false,sizeof(vis));
}

void dfs(int x,int y){
	vis[x][y]=true;
	for(int i=0;i<4;i++){
		int nextX=x+dx[i];
		int nextY=y+dy[i];
		if(nextX<0||nextY<0||nextX>=n||nextY>=m
		||vis[nextX][nextY]==true||map[nextX][nextY]==0) continue;
		dfs(nextX,nextY);
	}
}

int chk2(void){
	int cnt=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(map[i][j]!=0&&vis[i][j]==false){
				cnt++;
				dfs(i,j);
			}
		}
	}
	memset(vis,false,sizeof(vis));
	if(cnt==0){
		return -1;
	}
	return cnt;
}

int main(void){
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>map[i][j];
		}
	}
	
	do{
		chk();
		c=chk2();
		if(c==-1){
			cout<<0;
			return 0;
		}
		year++;
	}while(c<2);
	cout<<year;
	return 0;
} 
