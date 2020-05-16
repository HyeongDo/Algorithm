#include<stdio.h>

int t,inp;
long long p[105]={1,1,1,2,2,3,4,5,7,9};

int main(void){
	scanf("%d",&t);
	
	for(int i=10;i<=100;i++){
		p[i]=p[i-1]+p[i-5];
	}
	
	while(t--){
		scanf("%d",&inp);
		printf("%ld\n",p[inp-1]);
	}
	
	return 0;
}
