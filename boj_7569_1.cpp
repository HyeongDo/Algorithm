#include<iostream>
#include<queue>
#include<utility>
using namespace std;

int m,n,h,to[101][101][101],MAX;
int dx[]={1,-1,0,0,0,0};
int dy[]={0,0,1,-1,0,0};
int dh[]={0,0,0,0,1,-1};
queue<pair<pair<int,int>,int > > q;

void bfs(){
	while(!q.empty()){
		int nowH=q.front().second;
		int nowX=q.front().first.first;
		int nowY=q.front().first.second;
		q.pop();
		for(int i=0;i<6;i++){
			int nextH=nowH+dh[i];
			int nextX=nowX+dx[i];
			int nextY=nowY+dy[i];
			if(nextH<0||nextX<0||nextY<0) continue;
			if(nextH>=h||nextX>=n||nextY>=m) continue;
			if(to[nextH][nextX][nextY]) continue;
			q.push(make_pair(make_pair(nextX,nextY),nextH));
			to[nextH][nextX][nextY]=to[nowH][nowX][nowY]+1;
		}
	}
}

int main(void){
	cin>>m>>n>>h;
	for(int i=0;i<h;i++){
		for(int j=0;j<n;j++){
			for(int l=0;l<m;l++){
				cin>>to[i][j][l];
				if(to[i][j][l]==1){
					q.push(make_pair(make_pair(j,l),i));
				}
			}
		}
	}
	bfs();
	for(int i=0;i<h;i++){
		for(int j=0;j<n;j++){
			for(int l=0;l<m;l++){
				if(to[i][j][l]==0){
					cout<<-1;
					return 0;
				}
				MAX=max(MAX,to[i][j][l]);
			}
		}
	}
	cout<<MAX-1;
	return 0;
}
