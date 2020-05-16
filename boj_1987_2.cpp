#include<iostream>
using namespace std;

int r,c;
char ap[21][21];
bool chk[27];
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};

int dfs(int x,int y){
	int ret=0;
	chk[ap[x][y]-'A']=true;
//	cout<<ap[x][y]<<endl;
	for(int i=0;i<4;i++){
		int nextX=x+dx[i];
		int nextY=y+dy[i];
		if(nextX<0||nextY<0||nextX>=r||nextY>=c||chk[ap[nextX][nextY]-'A']==true) continue;
		ret=max(ret,dfs(nextX,nextY));
	}
	chk[ap[x][y]-'A']=false;
	return ret+1;
}

int main(void){
	cin>>r>>c;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>ap[i][j];
		}
	}
	cout<<dfs(0,0);
	return 0;
}
