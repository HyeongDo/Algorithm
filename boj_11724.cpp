#include<iostream>
#include<vector>
using namespace std;

int n,m,x,y,compo;
vector<vector<int> > v;
bool chk[1001];

void dfs(int x){
	chk[x]=true;
	for(int i=0;i<v[x].size();i++){
		int tmp = v[x][i];
		if(!chk[tmp]){
			dfs(tmp);
		}
	}
}

int main(void){
	cin>>n>>m;
	v.resize(n+1);
	for(int i=0;i<m;i++){
		cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	
	for(int i=1;i<=n;i++){
		if(!chk[i]){
			dfs(i);
			compo++;
		}
	}
	
	cout<<compo;
	
	return 0;
}
