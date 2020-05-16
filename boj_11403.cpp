#include<iostream>
#include<string.h>
using namespace std;

int n,ap[101][101],ans[101][101];
int visited[101][101];

void dfs(int target,int r){
	for(int i=0;i<n;i++){
		if(ap[r][i]==1&&visited[r][i]==0){
			ans[target][i]=1;
			visited[r][i]=1;
			dfs(target,i);
		}
	}
}

int main(void){
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>ap[i][j];
		}
	}
	
	for(int i=0;i<n;i++){
		memset(visited,0,sizeof(visited));
		dfs(i,i);
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<ans[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	return 0;
}
