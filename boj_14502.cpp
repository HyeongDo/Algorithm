#include<iostream>
#include<string.h>
using namespace std;

int n,m,a[10][10],tmp[10][10],num,MAX=-1;
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
bool visited[10][10];

void dfs(int x,int y,int cnt){
	if(x<0||y<0||x>=n||y>=m) return;
	if(cnt==3) return;
	for(int i=0;i<4;i++){
		int dn=x+dx[i];
		int dm=y+dy[i];
		if(a[dn][dm]==0&&!visited[dn][dm]){
			visited[dn][dm]=true;
			a[dn][dm]=1;
			cnt++;
			dfs(dn,dm,cnt);
		}
	}
}

void chkDfs(int x,int y){//2일때하는것 
	if(x<0||y<0||x>=n||y>=m) return;
	
	for(int i=0;i<4;i++){
		int dn=x+dx[i];
		int dm=y+dy[i];
		if(a[dn][dm]==0&&!visited[dn][dm]){
			visited[dn][dm]=true;
			a[dn][dm]=2;
			chkDfs(dn,dm); 
		}
	}
	
}

void numOne(){
	for(int i=0;i<n;++i){
		for(int j=0;j<m;++j){
			if(a[i][j]==0) num++;
		}
	}
}

int main(void){
	cin>>n>>m;
	for(int i=0;i<n;++i){
		for(int j=0;j<m;++j){
			cin>>a[i][j];	
		}
	}
	for(int i=0;i<n;++i){
		for(int j=0;j<m;++j){
			dfs(i,j,0);
			memset(visited,false,sizeof(visited));
			chkDfs(i,j);
			numOne();
			MAX = MAX < num ? num : MAX;
			num=0;
		}
	}
	
	cout<<MAX;
	
	return 0;
}
