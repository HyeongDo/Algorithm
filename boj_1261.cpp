#include<iostream>
#include<queue>
#include<utility>
#include<string.h>
using namespace std;

int dx[]={1,0,-1,0};
int dy[]={0,1,0,-1};

int n,m,d[101][101];
char map[101][101];

void bfs(){
	queue<pair<int,int> > q;
	q.push(make_pair(0,0));
	while(!q.empty()){
		int nowX=q.front().first;
		int nowY=q.front().second;
		q.pop();
		for(int i=0;i<4;i++){
			int nextX=nowX+dx[i];
			int nextY=nowY+dy[i];
			if(nextX<0||nextX>=n||nextY<0||nextY>=m) continue;
			if(map[nextX][nextY]=='0'&&d[nowX][nowY]<d[nextX][nextY]){
				d[nextX][nextY]=d[nowX][nowY];
				q.push(make_pair(nextX,nextY));
			}else if(map[nextX][nextY]=='1'&&d[nowX][nowY]+1<d[nextX][nextY]){
				d[nextX][nextY]=d[nowX][nowY]+1;
				q.push(make_pair(nextX,nextY));
			}
		}
	}
	cout<<d[n-1][m-1];
	return;
}

int main(void){
	cin>>m>>n;
	for(int i=0;i<n;i++){
		cin>>map[i];
	}
	memset(d,9999999,sizeof(d));
	d[0][0]=0;
	bfs();
	return 0;
}
