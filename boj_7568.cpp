#include<stdio.h>

int n;
int x[51];
int y[51];
int cnt;

void solve(int n){
	
	for(int i=0;i<n;i++){
		scanf("%d %d",&x[i],&y[i]);
	}
	
	/*
	
	가장 큰 사람, 가장 작은 사람이 아니라
	이사람보다 더 큰 사람이 있냐 x,y 둘 다 큼  
	이사람보다 더 작은 사람이 있냐 의 관점으로 본다. x,y 둘 다 작음 
	 
	돌려서 더 큰 사람이 있냐 (4명이다) 그러면 4명+1 5등.
	돌려서 더 큰 사람이 없다 (0명이다) 그러면 0명+1 1등. 
	 
	*/
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(x[i]<x[j]&&y[i]<y[j]){
				cnt++;
			}
		}
		printf("%d ",cnt+1);
		cnt=0;
	}
	
}

int main(void){
	
	scanf("%d",&n);
	solve(n);
	
	
	return 0;
} 
