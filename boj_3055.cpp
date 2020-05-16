#include<iostream>
#include<queue>
#include<utility>
using namespace std;

int r,c,d[51][51],ans,cx,cy,flag;
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
char map[51][51];
queue<pair<int,int> > q;
queue<pair<int,int> > s;

void bfs(){
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
			int nx=s.front().first;
			int ny=s.front().second;
			s.pop();
			if(nx==cx&&ny==cy){
				flag=1;
			}
			if(flag) break;
			for(int i=0;i<4;i++){
				int xx=nx+dx[i];
				int yy=ny+dy[i];
				if(xx<0||yy<0||xx>=r||yy>=c) continue;
				if(d[xx][yy]) continue;
				if(map[xx][yy]=='*'||map[xx][yy]=='X') continue;
				d[xx][yy]=1;
				s.push(make_pair(xx,yy));
			}	
		}
		if(flag) break;
		ans++;
	}
	return;
}

int main(void){
	cin>>r>>c;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>map[i][j];
			if(map[i][j]=='*'){
				q.push(make_pair(i,j));
			}else if(map[i][j]=='S'){
				d[i][j]=1;
				s.push(make_pair(i,j));
			}else if(map[i][j]=='D'){
				cx=i,cy=j;
			}
		}
	}
	bfs();
	if(flag) cout<<ans<<endl;
	else cout<<"KAKTUS"<<endl;
	return 0;
}

