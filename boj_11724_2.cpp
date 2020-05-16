#include<iostream>
#include<vector>
using namespace std;

int n,m,x,y,cnt;
vector<int> v[1001];
bool chk[1001];

void dfs(int x){
	chk[x]=true;
	for(int i=0;i<v[x].size();i++){
		int next=v[x][i];
		if(chk[next]==false){
			dfs(next);
		}
	}
}

int main(void){
	cin>>n>>m;
	for(int i=0;i<m;i++){
		cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	for(int i=1;i<=n;i++){
		if(chk[i]==false){
			dfs(i);
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}
