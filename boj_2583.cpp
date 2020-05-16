#include<iostream>
#include<vector>
#include<algorithm>
#include<string.h>
using namespace std;

int m,n,k,cnt,a[101][101];
vector<int> chk;
int dx[] = {-1,0,1,0};
int dy[] = {0,-1,0,1};

void check(int x1,int y1,int x2,int y2){
	for(int i=y1;i<y2;i++){
		for(int j=x1;j<x2;j++){
			a[j][i]=1;
		}
	}
}

int dfs(int x,int y){
	a[x][y]=1;
	int ret = 1;
	for(int i=0;i<4;i++){
		int nx=x+dx[i];
		int ny=y+dy[i];
		if(nx<0||ny<0||nx>=n||ny>=m) continue;
		if(!a[nx][ny]) ret+=dfs(nx,ny);
	}
	return ret;
}

int main(void){
	cin>>m>>n>>k;
	int z,x,c,v;
	for(int i=0;i<k;i++){
		cin>>z>>x>>c>>v;
		check(z,x,c,v);
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(!a[i][j]) chk.push_back(dfs(i,j));
		}
	}
	
	sort(chk.begin(),chk.end());
	
	cout<<chk.size()<<endl;
	for(int i=0;i<chk.size();i++){
		cout<<chk[i]<<" ";
	}
	
	return 0;
}
