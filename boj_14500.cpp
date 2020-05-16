#include<iostream>
#include<string.h>
using namespace std;

int n,m,map[501][501],MAX=-1,sum;
bool vi[501][501];
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};

int dfs(int x,int y,int cnt){	
	vi[x][y]=true;
	sum+=map[x][y];
	if(cnt==4){
		return MAX=max(sum,MAX);
	}
	for(int i=0;i<4;i++){
		int nextX=x+dx[i];
		int nextY=y+dy[i];
		if(nextX<0||nextY<0||nextX>=n||nextY>=m) continue;
		if(vi[nextX][nextY]=true) continue;
		dfs(nextX,nextY,cnt+1);
	}
}

int main(void){
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>map[i][j];
		}
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			MAX=max(MAX,dfs(i,j,1));
			memset(vi,false,sizeof(vi));
		}
	}
	cout<<MAX;
	return 0;
}
