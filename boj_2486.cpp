#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

int n,a[101][101],MAX=-1,MIN=101;
bool chk[101][101];
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
int cnt[101];

void dfs(int x,int y,int num){
	chk[x][y]=1;
	for(int i=0;i<4;i++){
		int nx=x+dx[i];
		int ny=y+dy[i];
		if(nx<0||ny<0||nx>=n||ny>=n||chk[nx][ny]==1||a[nx][ny]<=num) continue;
		dfs(nx,ny,num);
	}
}

int main(void){
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
			MAX = MAX < a[i][j] ? a[i][j] : MAX;
			MIN = MIN > a[i][j] ? a[i][j] : MIN;
		}
	}
	
	for(int i=0;i<MAX;i++){
		for(int j=0;j<n;j++){
			for(int k=0;k<n;k++){
				if(a[j][k]>i&&chk[j][k]==0){
					dfs(j,k,i);
					cnt[i]++;
				}
			}
		}
		memset(chk,0,sizeof(chk));
	}
	sort(cnt,cnt+MAX,greater<int>());
	cout<<cnt[0];
	return 0;
}
