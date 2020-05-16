#include<iostream>
using namespace std;

int n,m,a[9],b[9];
bool ck[9];

void dfs(int cnt){
	if(cnt==m){
		for(int i=0;i<m;i++){
			cout<<b[i]<<" ";
		}
		cout<<"\n";
		return;
	}
	for(int i=0;i<n;i++){
		if(ck[i]==true) continue;
		b[cnt]=a[i];
		ck[i]=true;
		dfs(cnt+1);
		ck[i]=false;
	}
}

int main(void){
	cin>>n>>m;
	for(int i=0;i<n;i++){
		a[i]=i+1;	
	}
	dfs(0);
	return 0;
}
