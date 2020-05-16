#include<iostream>
#include<string.h>
using namespace std;

int n,R,G,B;
char a[101][101];
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
bool visited[101][101];

void dfs(int x,int y,char c1,char c2){
	if(x<0||y<0||x>=n||y>=n){
		return;
	}
	visited[x][y]=true;
	for(int i=0;i<4;i++){
		int nx=x+dx[i];
		int ny=y+dy[i];
		if(a[nx][ny]==c1||a[nx][ny]==c2){
			if(!visited[nx][ny]){
				dfs(nx,ny,c1,c2);
			}	
		}
	}	
}

void go1(){
	for(int i=0;i<n;++i){
		for(int j=0;j<n;++j){
			if(a[i][j]=='R'&&!visited[i][j]){
				dfs(i,j,'R','R');
				R++;
			}else if(a[i][j]=='G'&&!visited[i][j]){
				dfs(i,j,'G','G');
				G++;
			}else if(a[i][j]=='B'&&!visited[i][j]){
				dfs(i,j,'B','B');
				B++;
			}
		}
	}
	cout<<R+G+B<<" ";
	R=G=0;
}

void go2(){
	for(int i=0;i<n;++i){
		for(int j=0;j<n;++j){
			if(a[i][j]=='R'||a[i][j]=='G'){
				if(!visited[i][j]){
					dfs(i,j,'R','G');;
					R++;
				}
			}
		}	
	}
	cout<<R+B;
}

int main(void){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	go1();
	memset(visited,false,sizeof(visited));
	go2();
	
	return 0;
}
