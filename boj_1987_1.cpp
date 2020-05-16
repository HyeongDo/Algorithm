#include<iostream>
using namespace std;

int r,c,ans;
char a[21][21];
bool chk[30];
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1}; 

int dfs(int x, int y){
	chk[a[x][y]]=true;
	cout<<a[x][y]+'A'<<endl;
	int ret=0;
	for(int i=0;i<4;i++){
		int nx=x+dx[i];
		int ny=y+dy[i];
		if(nx<0||ny<0||nx>=r||ny>=c) continue;
		if(chk[a[nx][ny]]==false){
			ret=max(ret,dfs(nx,ny));
//			ret+=dfs(nx,ny);
//			ans=max(ans,ret);
		}
	}
	chk[a[x][y]]=false;
	return ret+1;
}

int main(void){
	cin>>r>>c;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>a[i][j];
			a[i][j]=a[i][j]-'A';
		}
	}
	cout<<dfs(0,0);
	return 0;
}
