#include<iostream>
#include<queue>
#include<utility>
#include<algorithm>
using namespace std;

int n,house;
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
char map[26][26];
vector<int> h;

struct bun{
	int x,y;
};

int bfs(int x,int y){
	queue<pair<int,int> > q;
	q.push({x,y});
	map[x][y]='0';
	int ret=0;
	while(!q.empty()){
		int nx=q.front().first;
		int ny=q.front().second;
		q.pop();
		for(int i=0;i<4;i++){
			int xx=nx+dx[i];
			int yy=ny+dy[i];
			if(xx>=0&&y>=0&&xx<n&&yy<n&&map[xx][yy]=='1'){
				q.push({xx,yy});
				map[xx][yy]='0';
				ret++;
			}
		}
	}
	return ret+1;
}

int main(void){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>map[i];
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(map[i][j]=='1'){
				house++;
				h.push_back(bfs(i,j));
			}
		}
	}
	sort(h.begin(),h.end());
	cout<<house<<endl;
	for(int i=0;i<h.size();i++){
		cout<<h[i]<<endl;
	}
	
	return 0;
}
