#include<iostream>
#include<queue>
#include<utility>
using namespace std;

int m,n,h,to[101][101][101],MAX;
int dx[]={1,-1,0,0,0,0};
int dy[]={0,0,1,-1,0,0};
int dh[]={0,0,0,0,1,-1};

queue<pair<int,pair<int,int> > > q;

void bfs(){
	while(!q.empty()){
		int nowH=q.front().first;
		int nowX=q.front().second.first;
		int nowY=q.front().second.second;
		q.pop();
		for(int i=0;i<6;i++){
			int nextH=nowH+dh[i];
			int nextX=nowX+dx[i];
			int nextY=nowY+dy[i];
			if(nextH<0||nextX<0||nextY<0) continue;
			if(nextH>=h||nextX>=n||nextY>=m) continue;
			if(to[nextH][nextX][nextY]) continue;
			if(to[nextH][nextX][nextY]==0){
				to[nextH][nextX][nextY]=to[nowH][nowX][nowY]+1;
				q.push(make_pair(nextH,make_pair(nextX,nextY)));
			}
		}
	}
}

int main(void){
	cin>>m>>n>>h;
	for(int i=0;i<h;i++){
		for(int j=0;j<n;j++){
			for(int k=0;k<m;k++){
				cin>>to[i][j][k];
				if(to[i][j][k]==1){
					q.push(make_pair(i,make_pair(j,k)));
				}
			}
		}
	}
	
	for(int i=0;i<h;i++){
		for(int j=0;j<n;j++){
			for(int k=0;k<m;k++){
				MAX=max(MAX,to[i][j][k]);
			}
		}
	}
	cout<<MAX;
	return 0;
}
