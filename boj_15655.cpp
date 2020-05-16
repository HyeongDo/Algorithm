#include<iostream>
#include<algorithm>
using namespace std;

int n,m,t[9],o[9];
bool ck[9];

void sol(int cnt,int node){
	if(cnt==m){
		for(int i=0;i<m;i++){
			cout<<t[i]<<" ";
		}
		cout<<'\n';
		return;
	}
	
	for(int i=node;i<n;i++){
		t[cnt]=o[i];
		sol(cnt+1,i+1);
	}
}

int main(void){
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>o[i];
	}
	sort(o,o+n);
	sol(0,0);
	return 0;
}
