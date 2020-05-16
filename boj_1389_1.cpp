#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int n,m,tmp,sum,MIN=1e9,ans;
vector<vector<int> > p;
vector<bool> visit;

void dfs(int node,int target,int cnt){
	if(node==target){
		tmp=min(tmp,cnt);
		return;
	}
	
	for(int i=0;i<p[node].size();i++){
		int next = p[node][i];
		if(!visit[next]){
			visit[node]=true;
			dfs(next,target,cnt+1);
			visit[node]=false;
		}
	}
}

int main(void){
	cin>>n>>m;
	int x,y;
	p.resize(n+1);
	visit.resize(n+1);
	for(int i=0;i<m;i++){
		cin>>x>>y;
		p[x].push_back(y);
		p[y].push_back(x);
	}
	
	for(int i=1;i<=n;i++){
		sum=0;
		for(int j=1;j<=n;j++){
			if(i!=j){
				tmp=1e9;
				dfs(i,j,0);
				sum+=tmp;
			}
		}
		if(MIN>sum){
				MIN=sum;
				ans=i;
		}
	}
	cout<<ans;	
	return 0;
}

