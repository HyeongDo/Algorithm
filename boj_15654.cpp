#include<iostream>
#include<algorithm>
using namespace std;

int n,m,t[10001],o[10001];
bool ck[10001];

void sol(int cnt){
	if(cnt==m){
		for(int i=0;i<m;i++){
			cout<<t[i]<<" ";
		}
		cout<<'\n';
	}
	
	for(int i=0;i<n;i++){
		if(ck[i]==true) continue;
		ck[i]=true;
		t[cnt]=o[i];
		sol(cnt+1);
		ck[i]=false;
	}
}

int main(void){
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>o[i];
	}
	sort(o,o+n);
	sol(0);
	return 0;
}
