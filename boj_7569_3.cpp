#include<iostream>
#include<queue>
#include<utility>
using namespace std;

int n,m,h,map[101][101][101],ans;
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
			if(map[nextH][nextX][nextY]==0){
				map[nextH][nextX][nextY]=map[nowH][nowX][nowY]+1;
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
				cin>>map[i][j][k];
				if(map[i][j][k]==1){
					q.push(make_pair(i,make_pair(j,k)));
				}
			}
		}
	}
	bfs();
	for(int i=0;i<h;i++){
		for(int j=0;j<n;j++){
			for(int k=0;k<m;k++){
				if(map[i][j][k]==0){
					cout<<-1;
					return 0;
				}
				ans=max(ans,map[i][j][k]);
			}
		}
	}
	cout<<ans-1;
	return 0;
}
