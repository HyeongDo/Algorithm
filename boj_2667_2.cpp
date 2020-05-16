#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int n,inp[26][26];
char a[26][26];
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
bool chk[26][26];
vector<int> cnt;

int dfs(int x,int y){
	chk[x][y]=true;
	int ret=1;
	for(int i=0;i<4;i++){
		int nx=x+dx[i];
		int ny=y+dy[i];
		if(nx<0||ny<0||nx>=n||ny>=n||chk[nx][ny]==true||inp[nx][ny]==0) continue;
		ret+=dfs(nx,ny);
	}
	return ret;
}

int main(void){
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
			inp[i][j]=a[i][j]-'0';
		}
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(!chk[i][j]&&inp[i][j]==1){
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
