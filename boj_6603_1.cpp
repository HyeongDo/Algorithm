#include<iostream>
using namespace std;

int t=1,Case[15],temp[15];

void dfs(int v,int cnt){
	if(cnt==6){
		for(int i=0;i<6;i++){
			cout<<temp[i]<<" ";
		}
		cout<<"\n";
		return;
	}
	for(int i=v;i<t;i++){
		temp[cnt]=Case[i];
		dfs(i+1,cnt+1);
	}
}

int main(void){
	while(cin>>t&&t!=0){
		for(int i=0;i<t;i++){
			cin>>Case[i];
		}
		dfs(0,0);
		cout<<"\n";
	}
	return 0;
}
