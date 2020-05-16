#include<iostream>
using namespace std;

int w,h,map[51][51],cnt;
int dx[]={1,-1,0,0,1,-1,1,-1};
int dy[]={0,0,1,-1,-1,1,1,-1};

void dfs(int x,int y){
	map[x][y]=0;
	for(int i=0;i<8;i++){
		int nx=x+dx[i];
		int ny=y+dy[i];
		if(nx<0||nx>=h||ny<0||ny>=w) continue;
		if(map[nx][ny]==0) continue;
		dfs(nx,ny);
	}	
}

int main(void){
	while(cin>>w>>h&&w!=0&&h!=0){
		for(int i=0;i<h;i++){
			for(int j=0;j<w;j++){
				cin>>map[i][j];
			}
		}
		cnt=0;
		for(int i=0;i<h;i++){
			for(int j=0;j<w;j++){
				if(map[i][j]==1){
					cnt++;
					dfs(i,j);
				}
			}
		}
		cout<<cnt<<'\n';
	}
	return 0;
}
