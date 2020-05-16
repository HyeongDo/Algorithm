#include<iostream>
#include<queue>
#include<string.h>
#include<utility>
using namespace std;

int t,m,n,k,x,y,map[51][51],cnt;
bool chk[51][51];
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};

void bfs(int x,int y){
	queue<pair<int,int> > q;
	q.push(make_pair(x,y));
	chk[x][y]=true;
	while(!q.empty()){
		int nowX=q.front().first;
		int nowY=q.front().second;
		q.pop();
		for(int i=0;i<4;i++){
			int nextX=nowX+dx[i];
			int nextY=nowY+dy[i];
			if(nextX<0||nextY<0||nextX>=n||nextY>=m||chk[nextX][nextY]==true||map[nextX][nextY]==0) continue;
			q.push(make_pair(nextX,nextY));
			chk[nextX][nextY]=true;
		}
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
				if(map[i][j]==1&&chk[i][j]==false){
					cnt++;
					bfs(i,j);
				}
			}
		}
		cout<<cnt<<endl;
		cnt=0;
		memset(chk,false,sizeof(chk));
		memset(map,0,sizeof(map));
	}
	return 0;
}
