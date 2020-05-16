#include<iostream>
#include<algorithm>
using namespace std;

int l,c;
char ch[16],ans[16];

void dfs(int cnt,int s,int a,int b){
	if(cnt==l&&a>=1&&b>=2){
		for(int i=0;i<l;i++){
			cout<<ans[i];
		}
		cout<<endl;
		return;
	}
	
	for(int i=s;i<c;i++){
		ans[cnt]=ch[i];
		if(ans[cnt]=='a'||ans[cnt]=='e'||ans[cnt]=='i'||ans[cnt]=='o'
		||ans[cnt]=='u'){
			dfs(cnt+1,i+1,a+1,b);
		}else{
			dfs(cnt+1,i+1,a,b+1);
		}
	}
}

int main(void){
	cin>>l>>c;
	for(int i=0;i<c;i++){
		cin>>ch[i];
	}
	sort(ch,ch+c);
	dfs(0,0,0,0);
	return 0;
}
