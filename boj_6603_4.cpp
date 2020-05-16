#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;

int t;
vector<int> v,o(6);

void dfs(int cnt,int s){
	if(cnt==6){
		for(int i=0;i<6;i++){
			printf("%d ",o[i]);
		}
		printf("\n");
		return;
	}
	
	for(int i=s;i<t;i++){
		o[cnt]=v[i];
		dfs(cnt+1,i+1);
	}
}

int main(void){
	while(scanf("%d",&t)&&t!=0){
		v=vector<int> (t);
		for(int i=0;i<t;i++) scanf("%d",&v[i]);
		dfs(0,0);
		printf("\n");
	}
}
