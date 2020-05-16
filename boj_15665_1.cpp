#include<iostream>
#include<algorithm>
using namespace std;

int n,m,a[9],b[9];
bool c[9];

void dfs(int cnt){
	if(cnt==m){
		for(int i=0;i<m;i++){
			cout<<b[i]<<" ";
		}
		cout<<"\n";
		return;
	}
	int tmp=0;
	for(int i=0;i<n;i++){
		if(tmp==a[i]) continue;
		tmp=a[i];
		b[cnt]=a[i];
		dfs(cnt+1);
	}
}

int main(void){
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	dfs(0);
	return 0;
}
