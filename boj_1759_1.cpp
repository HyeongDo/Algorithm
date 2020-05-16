#include<iostream>
#include<algorithm>
using namespace std;

int l,c;
char m[16],o[16];

void dfs(int cnt,int s,int a,int b){
	if(cnt==l&&a>=1&&b>=2){
		for(int i=0;i<l;i++){
			cout<<o[i];
		}
		cout<<"\n";
		return;
	}
	
	for(int i=s;i<c;i++){
		o[cnt]=m[i];
		if(o[cnt]=='a'||o[cnt]=='e'||o[cnt]=='i'||o[cnt]=='o'||
		o[cnt]=='u'){
			dfs(cnt+1,i+1,a+1,b);
		} 
		else{
			dfs(cnt+1,i+1,a,b+1);
		}
	}
}

int main(void){
	cin>>l>>c;
	for(int i=0;i<c;i++){
		cin>>m[i];
	}
	
	sort(m,m+c);
	dfs(0,0,0,0);
	
	return 0;
}
