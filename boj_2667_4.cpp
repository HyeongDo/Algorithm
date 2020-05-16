#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int n;
char map[26][26];
vector<int> cnt;
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};

int dfs(int x,int y){
	map[x][y]='0';
	int ret=1;
	for(int i=0;i<4;i++){
		int nextX=x+dx[i];
		int nextY=y+dy[i];
		if(nextX<0||nextY<0||nextX>=n||nextY>=n||map[nextX][nextY]=='0') continue;
		ret+=dfs(nextX,nextY);
	}
	return ret;
}

int main(void){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>map[i];
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(map[i][j]=='1'){
				cnt.push_back(dfs(i,j));
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
