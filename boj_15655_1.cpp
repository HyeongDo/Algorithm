#include<iostream>
#include<algorithm>
using namespace std;

int n,m,a[9],b[9];

void dfs(int cnt,int u){
	if(cnt==m){
		for(int i=0;i<m;i++){
			cout<<b[i]<<" ";
		}
		cout<<"\n";
		return;
	}
	
	for(int i=u;i<n;i++){
		b[cnt]=a[i];
		dfs(cnt+1,i+1);
	}
}

int main(void){
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	dfs(0,0);
	return 0;
}
