#include<iostream>
#include<string.h> 
using namespace std;

char pu[13][8];
bool vis[13][8];
int dx[]={0,1,0,-1};
int dy[]={1,0,-1,0};
int cnt;

int dfs(int x,int y,char c){
	vis[x][y]=true;
	int ret=1;
	for(int i=0;i<4;i++){
		int nextX=x+dx[i];
		int nextY=y+dy[i];
		if(nextX<0||nextY<0||nextX>=12||nextY>=8) continue;
		if(vis[nextX][nextY]==true) continue;
		if(pu[nextX][nextY]!=c) continue;
		ret+=dfs(nextX,nextY,c);
	}
	return ret;
}

void pung(int x,int y,char c){
	if(vis[x][y]==true&&pu[x][y]==c){
		pu[x][y]='.';
		vis[x][y]=false;
		for(int i=0;i<4;i++){
			int nextX=x+dx[i];
			int nextY=y+dy[i];
			if(nextX<0||nextY<0||nextX>=12||nextY>=6) continue;
			if(pu[nextX][nextY]!=c) continue;
			if(vis[nextX][nextY]==false) continue;
			pung(nextX,nextY,c);
		}
	}
}

void down(){
	for(int i=11;i>=1;i--){
		for(int j=0;j<6;j++){
			if(pu[i-1][j]=='R'||pu[i-1][j]=='G'||pu[i-1][j]=='Y'
			||pu[i-1][j]=='B'||pu[i-1][j]=='P'){
				if(pu[i][j]=='.'){
					pu[i][j]=pu[i-1][j];
					pu[i-1][j]='.';
					down();
				}
			}
		}
	}
}

int main(void){
	
	for(int i=0;i<12;i++){
		cin>>pu[i];
	}
	
	for(int i=11;i>=0;i--){
		for(int j=0;j<6;j++){
			if(pu[i][j]=='R'){
				int red=dfs(i,j,'R');
				if(red>=4){
					pung(i,j,'R');
					cnt++;
				}
			}else if(pu[i][j]=='G'){
				int green=dfs(i,j,'G');
				if(green>=4){
					pung(i,j,'G');
					cnt++;
				}
			}else if(pu[i][j]=='Y'){
				int yellow=dfs(i,j,'Y');
				if(yellow>=4){
					pung(i,j,'Y');
					cnt++;
				}
			}else if(pu[i][j]=='B'){
				int blue=dfs(i,j,'B');
				if(blue>=4){
					pung(i,j,'B');
					cnt++;
				}
			}else if(pu[i][j]=='P'){
				int purple=dfs(i,j,'P');
				if(purple>=4){
					pung(i,j,'P');
					cnt++;
				}
			}
			memset(vis,false,sizeof(vis));
			down();
//			for(int i=0;i<12;i++){
//				cout<<pu[i]<<endl;
//			}
		}
	}
	
	cout<<cnt;
	
	return 0;
}
