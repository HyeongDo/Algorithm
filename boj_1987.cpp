#include<iostream>
using namespace std;

int r,c,count,MAX;
char inp[21][21];
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
bool chk[100];

int dfs(int x,int y,int cnt){
	int ret=0;
	chk[inp[x][y]-'A']=true;
//	cout<<inp[x][y]<<endl; 
	for(int i=0;i<4;i++){
		int dr=x+dx[i];
		int dc=y+dy[i];
		char tmp = inp[dr][dc];
		if(!chk[tmp-'A']&&dr>=0&&dc>=0&&dr<r&&dc<c){
			ret=max(ret,dfs(dr,dc,cnt+1));
		}
	}
	chk[inp[x][y]-'A']=false;
	return ret+1;
}

int main(void){
	cin>>r>>c;
	for(int i=0;i<r;++i){
		for(int j=0;j<c;++j){
			cin>>inp[i][j];
		}
	}
	
	cout<<dfs(0,0,1);
	
	return 0;
}
