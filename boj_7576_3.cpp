#include<iostream>
#include<queue>
#include<utility>
#include<string.h>
using namespace std;

int m,n,map[1001][1001],tomato,MAX=0;
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
bool chk[1001][1001];
queue<pair<int,int> > q;

void bfs(){
	while(!q.empty()){
		int nowX=q.front().first;
		int nowY=q.front().second;
		chk[nowX][nowY]=true;
		q.pop();
		for(int i=0;i<4;i++){
			int nextX=nowX+dx[i];
			int nextY=nowY+dy[i];
			if(nextX<0||nextY<0||nextX>=n||nextY>=m||chk[nextX][nextY]==true||map[nextX][nextY]==-1) continue;
			if(map[nextX][nextY]) continue;
			chk[nextX][nextY]=true;
			map[nextX][nextY]=map[nowX][nowY]+1;
			q.push(make_pair(nextX,nextY));
		}
	}
}

int main(void){
	cin>>m>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>map[i][j];
			if(map[i][j]==0) tomato++;
			if(map[i][j]==1){
				q.push(make_pair(i,j));
			}
		}
	}
	if(tomato==0){
		cout<<0;
		return 0;
	}
	bfs();
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			MAX=max(map[i][j],MAX);
			if(map[i][j]==0){
				cout<<-1;
				return 0;
			}
		}
	}
	cout<<MAX-1;
	return 0;
}
