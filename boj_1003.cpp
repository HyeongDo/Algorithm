#include<stdio.h>
int n;
int test;

void fibo(int n,int *a,int *b){
	int i,t;
	if(n==0) (*a)++;
	else if(n==1) (*b)++;
	else{
		*a=1;
		*b=1;
		for(int i=2;i<n;i++){
			t=*a+*b;
			*a=*b;
			*b=t;
		}
	}
}

int main(void){
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		scanf("%d",&test);
		
		int a=0,b=0;
		fibo(test,&a,&b);
		printf("%d %d\n",a,b);	
	}

	
	return 0;
}
