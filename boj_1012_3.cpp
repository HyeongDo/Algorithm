#include<iostream>
using namespace std;

int t,m,n,k,x,y,map[51][51],cnt;
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};

void dfs(int x,int y){
	map[x][y]=0;
	for(int i=0;i<4;i++){
		int nextX=x+dx[i];
		int nextY=y+dy[i];
		if(nextX<0||nextY<0||nextX>=n||nextY>=m||map[nextX][nextY]==0) continue;
		dfs(nextX,nextY);
	}
}

int main(void){
	cin>>t;
	while(t--){
		cin>>m>>n>>k;
		for(int i=0;i<k;i++){
			cin>>x>>y;
			map[y][x]=1;
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(map[i][j]==1){
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
