#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int m,n,k,a[101][101],x1,y1,x2,y2;
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
vector<int> cnt;

int dfs(int y,int x){
	a[y][x]=1;
	int ret=1;
	for(int i=0;i<4;i++){
		int nextX=x+dx[i];
		int nextY=y+dy[i];
		if(nextX<0||nextY<0||nextX>=n||nextY>=m||a[nextY][nextX]==1) continue;
		ret+=dfs(nextY,nextX);
	}
	return ret;
}

int main(void){
	cin>>m>>n>>k;
	for(int i=0;i<k;i++){
		cin>>x1>>y1>>x2>>y2;
		for(int j=x1;j<x2;j++){
			for(int l=y1;l<y2;l++){
				a[l][j]=1;
			}
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(a[i][j]==0){
				cnt.push_back(dfs(i,j));
			}
		}
	}
	cout<<cnt.size()<<endl;
	sort(cnt.begin(),cnt.end());
	for(int i=0;i<cnt.size();i++){
		cout<<cnt[i]<<" ";
	}
	return 0;
}
