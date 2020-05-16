#include<iostream>
using namespace std;

int k=1,n[15],temp[15];

void dfs(int v,int cnt){
	if(cnt==6){
		for(int i=0;i<6;i++){
			cout<<temp[i]<<" ";
		}
		cout<<"\n";
		return;
	}
	
	for(int i=v;i<k;i++){
		temp[cnt]=n[i];
		dfs(i+1,cnt+1);
	}
	
}

int main(void){
	
	while(cin>>k&&k){
		
		for(int i=0;i<k;i++){
			cin>>n[i];
		}
		
		dfs(0,0);
		cout<<'\n';
		
	}
	
	return 0;
}
