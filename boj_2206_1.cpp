#include<iostream>
#include<queue>
#include<utility>
using namespace std;

int n,m,d[1001][1001][2];
int a[1001][1001];
int dx[]={1,0,-1,0};
int dy[]={0,1,0,-1};

int bfs(){
	queue<pair<pair<int,int>,int> > q;
	q.push(make_pair(make_pair(0,0),0));
	while(!q.empty()){
		int nowX=q.front().first.first;
		int nowY=q.front().first.second;
		int nowF=q.front().second;
		if(nowX==n-1&&nowY==m-1){
			return d[nowX][nowY][nowF]+1;
		}
		q.pop();
		for(int i=0;i<4;i++){
			int nextX=nowX+dx[i];
			int nextY=nowY+dy[i];
			if(nextX<0||nextY<0||nextX>=n||nextY>=m) continue;
			if(d[nextX][nextY][nowF]) continue;
			if(a[nextX][nextY]==0){
				d[nextX][nextY][nowF]=d[nowX][nowY][nowF]+1;
				q.push(make_pair(make_pair(nextX,nextY),nowF));
			}
			if(a[nextX][nextY]==1&&nowF==0){
				d[nextX][nextY][1]=d[nowX][nowY][nowF]+1;
				q.push(make_pair(make_pair(nextX,nextY),1));
			}
		}
	}
	return -1;
}

int main(void){
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%1d",&a[i][j]);
		}
	}
	cout<<bfs();
	return 0;
}
