#include<iostream>
using namespace std;

int k,a[15],tmp[15];

void dfs(int v,int cnt){
	if(cnt==6){
		for(int i=0;i<6;i++){
			cout<<tmp[i]<<" ";
		}
		cout<<"\n";
		return;
	}
	for(int i=v;i<k;i++){
		tmp[cnt]=a[i];
		dfs(i+1,cnt+1);
	}
}

int main(void){
	while(cin>>k&&k!=0){
		for(int i=0;i<k;i++){
			cin>>a[i];
		}
		dfs(0,0);
		cout<<"\n";
	}
	return 0;
}
