#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int m,n,k,a[101][101],bX,bY,tX,tY;
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
vector<int> cnt;

int dfs(int x,int y){
	a[x][y]=1;
	int ret = 1;
	for(int i=0;i<4;i++){
		int nx=x+dx[i];
		int ny=y+dy[i];
		if(nx>=0&&ny>=0&&nx<n&&ny<m&&a[nx][ny]==0){
			ret+=dfs(nx,ny);
		}
	}
	return ret;
}

int main(void){
	cin>>m>>n>>k;
	for(int i=0;i<k;i++){
		cin>>bX>>bY>>tX>>tY;
		for(int j=bX;j<tX;j++){
			for(int l=bY;l<tY;l++){
				a[j][l]=1;
			}
		}
	}
	
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(a[j][i]==0){
				cnt.push_back(dfs(j,i));
			}
		}
	}
	sort(cnt.begin(),cnt.end());
	cout<<cnt.size()<<endl;
	for(int i=0;i<cnt.size();i++){
		cout<<cnt[i]<<" ";
	}
	return 0;
}
