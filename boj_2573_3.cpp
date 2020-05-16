#include<iostream>
#include<string.h>
using namespace std;

int n,m,map[301][301];
bool chk[301][301];
int dx[]={0,1,0,-1};
int dy[]={1,0,-1,0};

void numbering(int x,int y){
	chk[x][y]=true;
	for(int i=0;i<4;i++){
		int nextX=x+dx[i];
		int nextY=y+dy[i];
		if(nextX<0||nextY<0||nextX>=n||nextY>=m) continue;
		if(chk[nextX][nextY]==true) continue;
		if(map[nextX][nextY]>0){
			numbering(nextX,nextY);
		}
	}
}

int solve(){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(map[i][j]>0&&chk[i][j]==false){
				for(int k=0;k<4;k++){
					int nextX=i+dx[k];
					int nextY=j+dy[k];
					if(nextX<0||nextY<0||nextX>=n||nextY>=m) continue;	
					if(chk[nextX][nextY]==true) continue;
					if(map[nextX][nextY]==0&&map[i][j]>0){
						map[i][j]-=1;
					}
				}
				chk[i][j]=true;
			}
		}
	}
	memset(chk,false,sizeof(chk));
	int cnt=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(map[i][j]>0&&chk[i][j]==false){
				numbering(i,j);
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
	int ans;
	int c=0;
	do{
		ans=solve();
		c++;
		if(ans==-1){
			cout<<0;
			return 0;
		}
	}while(ans<2);
	cout<<c;
	return 0;
}
