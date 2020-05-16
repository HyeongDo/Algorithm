#include<iostream>
#include<queue>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;

int n;
char inp[26][26];
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
vector<int> cnt;
queue<pair<int,int> > q;

int bfs(int x,int y){
	q.push(make_pair(x,y));
	inp[x][y]='0';
	int ret=1;
	while(!q.empty()){
		int nowX=q.front().first;
		int nowY=q.front().second;
		q.pop();
		for(int i=0;i<4;i++){
			int nextX=nowX+dx[i];
			int nextY=nowY+dy[i];
			if(nextX<0||nextY<0||nextX>=n||nextY>=n||inp[nextX][nextY]=='0') continue;
			q.push(make_pair(nextX,nextY));
			inp[nextX][nextY]='0';
			ret++;
		}
	}
	return ret;
}

int main(void){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>inp[i];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(inp[i][j]=='1'){
				cnt.push_back(bfs(i,j));
			}
		}
	}
	cout<<cnt.size()<<endl;
	sort(cnt.begin(),cnt.end());
	for(int i=0;i<cnt.size();i++){
		cout<<cnt[i]<<endl;
	}
	return 0;
}
