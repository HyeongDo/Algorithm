#include<iostream>
#include<utility>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;

int n,a[26][26];
char temp[26][26];
vector<int> cnt;
queue<pair<int,int> > q;
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};

int bfs(int x,int y){
	q.push({x,y});
	a[x][y]=0;
	int ret=1;
	while(!q.empty()){
		int nowX=q.front().first;
		int nowY=q.front().second;
		q.pop();
		for(int i=0;i<4;i++){
			int nextX=nowX+dx[i];
			int nextY=nowY+dy[i];
			if(nextX<0||nextY<0||nextX>=n||nextY>=n||a[nextX][nextY]==0) continue;
			q.push({nextX,nextY});
			a[nextX][nextY]=0;
			ret++;
		}
	}
	return ret;
}

int main(void){
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>temp[i][j];
			a[i][j]=temp[i][j]-'0';
		}
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(a[i][j]==1){
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
