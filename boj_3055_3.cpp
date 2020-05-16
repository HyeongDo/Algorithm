#include<iostream>
#include<queue>
#include<utility>
using namespace std;

int r,c,xd,yd,d[51][51];
char map[51][51];
queue<pair<int,int> > s,w;
int dx[]={1,0,-1,0};
int dy[]={0,1,0,-1};

int bfs(){
	while(!s.empty()){
		int wSize=w.size();
		while(wSize--){
			int nowX=w.front().first;
			int nowY=w.front().second;
			w.pop();
			for(int i=0;i<4;i++){
				int nextX=nowX+dx[i];
				int nextY=nowY+dy[i];
				if(nextX<0||nextY<0||nextX>=r||nextY>=c) continue;
				if(map[nextX][nextY]=='*'||map[nextX][nextY]=='D'
				||map[nextX][nextY]=='X') continue;
				map[nextX][nextY]='*';
				w.push(make_pair(nextX,nextY));
			}
		}
	
		int sSize=s.size();
		while(sSize--){
			int nowX=s.front().first;
			int nowY=s.front().second;
			s.pop();
			if(nowX==xd&&nowY==yd){
				return d[nowX][nowY];
			}
			for(int i=0;i<4;i++){
				int nextX=nowX+dx[i];
				int nextY=nowY+dy[i];
				if(nextX<0||nextY<0||nextX>=r||nextY>=c) continue;
				if(map[nextX][nextY]=='*'||map[nextX][nextY]=='X') continue;
				if(d[nextX][nextY]) continue;
				d[nextX][nextY]=d[nowX][nowY]+1;
				s.push(make_pair(nextX,nextY));
			}
		}
	}
	return 0;
}

int main(void){
	cin>>r>>c;
	
	for(int i=0;i<r;i++) {
		for(int j=0;j<c;j++){
			cin>>map[i][j];
			if(map[i][j]=='S'){
				s.push(make_pair(i,j));
			}else if(map[i][j]=='*'){
				w.push(make_pair(i,j));
			}else if(map[i][j]=='D'){
				xd=i,yd=j;	
			}
		}	
	}
	
	int ans=bfs();
	if(ans==0){
		cout<<"KAKTUS";
		return 0;
	}
	cout<<ans;
	return 0;
}
