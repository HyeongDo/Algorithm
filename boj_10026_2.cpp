#include<iostream>
#include<string.h>
using namespace std;

int n,R,G,B;
char a[101][101];
bool chk[101][101];
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};

void dfs(int x,int y,char color1,char color2){
	chk[x][y]=true;
	for(int i=0;i<4;i++){
		int nextX=x+dx[i];
		int nextY=y+dy[i];
		if(nextX<0||nextY<0||nextX>=n||nextY>=n||chk[nextX][nextY]==true) continue;
		if(a[nextX][nextY]==color1||a[nextX][nextY]==color2){
			dfs(nextX,nextY,color1,color2);	
		}
	}
}

int main(void){
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(a[i][j]=='R'&&chk[i][j]==false){
				dfs(i,j,'R','R');
				R++;
			}else if(a[i][j]=='G'&&chk[i][j]==false){
				dfs(i,j,'G','G');
				G++;
			}else if(a[i][j]=='B'&&chk[i][j]==false){
				dfs(i,j,'B','B');
				B++;
			}
		}
	}
	cout<<R+G+B<<" ";
	R=G=0;
	memset(chk,false,sizeof(chk));
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(a[i][j]=='R'||a[i][j]=='G'){
				if(chk[i][j]==false){
					dfs(i,j,'R','G');
					R++;
				}
			}
		}
	}
	cout<<R+B;
	return 0;
}
