#include<iostream>
using namespace std;

int n,s,ans;
long long su[21];

void dfs(int i,int sum){
	if(sum+su[i]==s) ans++;
	if(i+1==n) return;
	dfs(i+1,sum);
	dfs(i+1,sum+su[i]);
}

int main(void){
	cin>>n>>s;
	for(int i=0;i<n;i++){
		cin>>su[i];
	}
	dfs(0,0);
	cout<<ans;	
	return 0;
}
