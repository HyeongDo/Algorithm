#include<iostream>
#include<algorithm>
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
	
	int tmp=0;
	for(int i=0;i<n;i++){
		if(ck[i]==true) continue; //같은 자리에 안 들어가게! 자릿수! 
		if(tmp==a[i]) continue; //같은 수가 같은 자릿수에 안 들어가게! 
		
		tmp=a[i];
		b[cnt]=a[i];
		ck[i]=true;
		
		dfs(cnt+1);
		
		ck[i]=false;
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
