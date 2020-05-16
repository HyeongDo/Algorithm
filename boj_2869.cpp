#include<stdio.h>

int main(void){
	
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	
	//a*N-b*(N-1) >= c
	//a*N-b*(N)+b >= c
	//(a-b)*N >= c-b
	//N>=(c-b)/(a-b)
	int N = (c-b)/(a-b);
	double N2 = (c-b)%(a-b);
	if(N+N2==(double)(c-b)/(a-b)){
		printf("%d",N);
	}else{
		printf("%d",N+1);
	}
	
	
	return 0;
}
