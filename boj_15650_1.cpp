#include<iostream>
#include<vector>
using namespace std;

int n,m;
bool ck[10];
vector<int> v;

void solve(int c){
	
	if(c==m){
		for(int i=0;i<m;i++){
			cout<<v[i]<<" ";
		}
		cout<<"\n";
		return;
	}
	
	for(int i=1;i<=n;i++){
		if(ck[i]==true) continue;
		ck[i]=true;
		v.push_back(i);
		solve(c+1);
		ck[i]=false;
		v.pop_back();
	}
	
}

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m;
	solve(0);
	return 0;
}
