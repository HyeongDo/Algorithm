#include<stdio.h>

int n,m,dp[301];

int main(void){
	scanf("%d %d",&n,&m);
	
	if(n<=m){
		printf("%d",(n-1)+(m-1)*n);
	}else{
		printf("%d",(m-1)+(n-1)*m);
	}
	
	return 0;
}
