#include<iostream>
#include<vector>
using namespace std;

int k,v,e,x,y;
vector<vector<int> > vec;
bool chk[20001];

void dfs(int n,int group){
	chk[n]=true;
	for(int i=0;i<vec[n].size();i++){
		int next=vec[n][i];
		if(chk[next]==false){
			dfs(next,-group);
		}
	}
}

int main(void){
	cin>>k;
	while(k--){
		cin>>v>>e;
		vec.resize(v+1);
		for(int i=0;i<e;i++){
			cin>>x>>y;
			vec[x].push_back(y);
			vec[y].push_back(x);
		}	
		for(int i=1;i<=v;i++){
			
		}
	}
	
	
	return 0;
}
