#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int n,m,k,ax,ay,bx,by,a[101][101],Count;
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
vector<int> cnt;

int dfs(int x,int y){
	a[x][y]=1;
	int ret=0;
	for(int i=0;i<4;i++){
		int nx=x+dx[i];
		int ny=y+dy[i];
		if(a[nx][ny]==0&&nx>=1&&ny>=1&&nx<m&&ny<n){
			ret+=1;
			dfs(nx,ny);
		}
	}
	return ret+1;
}

int main(void){
	cin>>m>>n>>k;
	for(int i=0;i<k;i++){
		cin>>ax>>ay>>bx>>by;
		for(int j=ax+1;j<=bx;j++){
			for(int l=ay+1;l<=by;l++){
				a[j][l]=1;
			}
		}
	}
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			if(a[i][j]==0){
				dfs(i,j);
				cnt.push_back(dfs(i,j));
				Count++;
			}
		}
	}
	sort(cnt.begin(),cnt.end());
	cout<<Count<<endl;
	for(int i=0;i<cnt.size();i++){
		cout<<cnt[i]<<" ";
	}
	return 0;
}
