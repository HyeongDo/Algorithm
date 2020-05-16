#include<iostream>
#include<vector>
using namespace std;

int n,m,x,y,tmp,sum,ans,MIN=1e9;
vector<int> v[101];
bool chk[101];

void dfs(int node,int target,int cnt){
	if(node==target){
		tmp=min(tmp,cnt);
		return;
	}
	for(int i=0;i<v[node].size();i++){
		int next=v[node][i];
		if(chk[next]==false){
			chk[node]=true;
			dfs(next,target,cnt+1);
			chk[node]=false;
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
