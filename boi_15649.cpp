#include<iostream>
#include<vector>
using namespace std;

int n,m;
vector<int> v;
bool vi[10];

void dfs(int c){
	if(c==m){
		for(int i=0;i<v.size();i++){
			cout<<v[i]<<" ";
		}
		cout<<"\n";
		return;
	}
	
	for(int i=1;i<=n;i++){
		if(vi[i]==true) continue;
		vi[i]=true;
		v.push_back(i);
		dfs(c+1);
		vi[i]=false;
		v.pop_back();
	}
}

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>n>>m;
	dfs(0);
	return 0;
}
