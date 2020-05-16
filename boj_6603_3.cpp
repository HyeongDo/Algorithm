#include<cstdio>

int k,v[15],out[15];

void dfs(int cnt,int s){
	if(cnt==6){
		for(int i=0;i<6;i++){
			printf("%d ",out[i]);
		}
		printf("\n");
		return;
	}
	
	for(int i=s;i<k;i++){
		out[cnt]=v[i];
		dfs(cnt+1,i+1);
	}
}

int main(void){
	
	while(scanf("%d",&k)&&k!=0){
		for(int i=0;i<k;i++){
			scanf("%d",&v[i]);
		}
		dfs(0,0);
		printf("\n");
	}
	
	return 0;
}
