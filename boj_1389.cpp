#include<iostream>
#include<vector>
using namespace std;

int n,m,x,y,tmp=1e9,big_N=1e9,sum,ans;
vector<vector<int> > a;
vector<bool> vis;

void dfs(int node,int target,int cnt){
	if(node==target){
		tmp=min(tmp,cnt);
		return;
	}
	
	for(int i=0;i<a[node].size();i++){
		int next = a[node][i];
		if(!vis[next]){
			vis[node]=true;
			dfs(next,target,cnt+1);
			vis[node]=false;
		}
	}
}

int main(void){
	cin>>n>>m;
	a.resize(n+1);
	vis.resize(n+1);
	for(int i=0;i<m;i++){
		cin>>x>>y;
		a[x].push_back(y);
		a[y].push_back(x);
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
		
		if(sum<big_N){
				big_N=sum;
				ans=i;
		}
	}
	
	cout<<ans;
	
	return 0;
}
