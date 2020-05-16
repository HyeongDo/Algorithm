#include<iostream>
#include<queue>
#include<utility>
using namespace std;

int r,c,d[51][51],di,dj;
char map[51][51];
queue<pair<int,int> > q,s;
int dx[]={0,1,0,-1};
int dy[]={1,0,-1,0};

int bfs(){
	while(!s.empty()){
		int qSize=q.size();
		while(qSize--){
			int nowX=q.front().first;
			int nowY=q.front().second;
			q.pop();
			for(int i=0;i<4;i++){
				int nextX=nowX+dx[i];
				int nextY=nowY+dy[i];
				if(nextX<0||nextY<0||nextX>=r||nextY>=c) continue;
				if(map[nextX][nextY]=='*'||map[nextX][nextY]=='X'
				||map[nextX][nextY]=='D') continue;
				map[nextX][nextY]='*';
				q.push(make_pair(nextX,nextY));
			}
		}
		
		int sSize=s.size();
		while(sSize--){
			int nowX=s.front().first;
			int nowY=s.front().second;
			s.pop();
			if(nowX==di&&nowY==dj){
				return d[nowX][nowY];
			}
			for(int i=0;i<4;i++){
				int nextX=nowX+dx[i];
				int nextY=nowY+dy[i];
				if(nextX<0||nextY<0||nextX>=r||nextY>=c) continue;
				if(map[nextX][nextY]=='*'||map[nextX][nextY]=='X') continue;
				if(d[nextX][nextY]) continue;
				s.push(make_pair(nextX,nextY));
				d[nextX][nextY]=d[nowX][nowY]+1;
			} 
		}
	}
	return -1;
}

int main(void){
	cin>>r>>c;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>map[i][j];
			if(map[i][j]=='*'){
				q.push(make_pair(i,j));
			}else if(map[i][j]=='S'){
				s.push(make_pair(i,j));
			}else if(map[i][j]=='D'){
				di=i,dj=j;
			}
		}
	}
	int ans=bfs();
	if(ans==-1){
		cout<<"KAKTUS";
		return 0;
	}
	cout<<ans;	
	return 0;
}
