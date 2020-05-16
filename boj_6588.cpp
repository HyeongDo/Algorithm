#include<cstdio>
#define MAX 1000000

int n;
bool prime[MAX+1];

int main(void){

	for(int i=2;i*i<=MAX;i++){
		if(!prime[i]){
			for(int j=(i*i)%MAX;j<=MAX;j+=i){
				prime[j]=true;
			}
		}
	}

	while(true){
		scanf("%d",&n);
		if(n==0) break;
		for(int i=2;i<=n;i++){
			if(!prime[i]){
				int b=n-i;
				if(!prime[b]){
					printf("%d = %d + %d\n",n,i,b);
					break;
				}
			}
		}
	}
	
	return 0;
}
