#include<iostream>
#include<string.h>
using namespace std;

int n,m,map[301][301],c,ving;
int dx[]={1,0,-1,0};
int dy[]={0,1,0,-1};
bool chk[301][301];

void dfs(int x,int y){
	for(int i=0;i<4;i++){
		int nextX=x+dx[i];
		int nextY=y+dy[i];
		if(nextX<0||nextY<0||nextX>=n||nextY>=m) continue;
		if(chk[nextX][nextY]==true) continue;
		if(map[nextX][nextY]==0&&map[x][y]>=1){
			map[x][y]-=1;
		}
	}
	chk[x][y]=true;
}

void solve(){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(map[i][j]>=1&&chk[i][j]==false){
				dfs(i,j);
			}
		}
	}
	memset(chk,false,sizeof(chk));
}

void number(int x,int y){
	chk[x][y]=true;
	for(int i=0;i<4;i++){
		int nextX=x+dx[i];
		int nextY=y+dy[i];
		if(nextX<0||nextY<0||nextX>=n||nextY>=m) continue;
		if(map[nextX][nextY]==0) continue;
		if(chk[nextX][nextY]==true) continue;
		number(nextX,nextY);
	}
}

int year(){
	int cnt=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(map[i][j]>=1&&chk[i][j]==false){
				number(i,j);
				cnt++;
			}
		}
	}
	memset(chk,false,sizeof(chk));
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
		ving++;
		solve();//ok
		c=year();
		if(c==-1){
			cout<<0;
			return 0;
		}
	}while(c<2);
	
	cout<<ving;
	return 0;
}
