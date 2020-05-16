#include<iostream>
#include<string.h>
using namespace std;

int n,m,map[301][301],ans,v;
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
bool chk[301][301];

void sol(){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(map[i][j]>0&&chk[i][j]==false){
				for(int k=0;k<4;k++){
					int nextX=i+dx[k];
					int nextY=j+dy[k];
					if(nextX<0||nextY<0||nextX>=n||nextY>=m) continue;
					if(chk[nextX][nextY]==true) continue;
					if(map[nextX][nextY]==0&&map[i][j]>=1){
						map[i][j]-=1;
					}
				}			
				chk[i][j]=true;
			}
		}
	}
}

void dfs(int x,int y){
	chk[x][y]=true;
	for(int i=0;i<4;i++){
		int nextX=x+dx[i];
		int nextY=y+dy[i];
		if(nextX<0||nextY<0||nextX>=n||nextY>=m) continue;
		if(chk[nextX][nextY]) continue;
		if(map[nextX][nextY]>0){
			dfs(nextX,nextY);
		}
	}
}

int chking(void){
	int cnt=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(map[i][j]>0&&chk[i][j]==false){
				cnt++;
				dfs(i,j);
			}
		}
	}
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
		sol();
//		cout<<"--"<<endl;
//		for(int i=0;i<n;i++){
//			for(int j=0;j<m;j++){
//				cout<<map[i][j]<<" ";
//			}
//			cout<<endl;
//		}
		memset(chk,false,sizeof(chk));
		ans=chking();
		v++;
		memset(chk,false,sizeof(chk));
		if(ans==-1){
			cout<<0;
			return 0;
		}
	}while(ans<2);
	cout<<v;
	return 0;
}
