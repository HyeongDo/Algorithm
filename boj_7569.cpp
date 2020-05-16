#include<iostream>
#include<queue>
#include<utility>
using namespace std;

int n,m,k,to[101][101][101],ans;
queue<pair<pair<int,int>,int > > q;
int dx[]={-1,0,1,0,0,0};
int dy[]={0,1,0,-1,0,0};
int dh[]={0,0,0,0,1,-1};

void bfs(){
	while(!q.empty()){
		int nowX=q.front().first.first;
		int nowY=q.front().first.second;
		int nowH=q.front().second;
		q.pop();
		for(int i=0;i<6;i++){
			int nextX=nowX+dx[i];
			int nextY=nowY+dy[i];
			int nextH=nowH+dh[i];
			if(nextX<0||nextY<0||nextH<0||nextX>=n||nextY>=m||nextH>=k) continue;
			if(to[nextH][nextX][nextY]) continue;
			q.push(make_pair(make_pair(nextX,nextY),nextH));
			to[nextH][nextX][nextY]=to[nowH][nowX][nowY]+1;
		}
	}
}

int main(void){
	cin>>m>>n>>k;
	for(int i=0;i<k;i++){
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
	for(int i=0;i<k;i++){
		for(int j=0;j<n;j++){
			for(int l=0;l<m;l++){
				if(to[i][j][l]==0){
					cout<<"-1";
					return 0;
				}
				ans = max(ans,to[i][j][l]);
			}
		}
	}
	cout<<ans-1;
	return 0;
}
