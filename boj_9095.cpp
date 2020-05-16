#include<stdio.h>

int n,inp;


int solve(int i){
	if(i==1) return 1;
	if(i==2) return 2;
	if(i==3) return 4;
	else{
		return solve(i-1)+solve(i-2)+solve(i-3);
	}	
}

int main(void){
	scanf("%d",&n);
	
	
	for(int i=0;i<n;i++){
		scanf("%d",&inp);
		printf("%d\n",solve(inp));
	}

	
	return 0;
}
