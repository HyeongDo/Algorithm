#include<stdio.h>

int t,x,y;
int n;
int main(void){
	
	scanf("%d",&t);
	while(t--){
		scanf("%d%d",&x,&y);
		// y-x값이 중요 
		n = 1;
		while(n){
			if(((y-x)+1)/2>=2*n-1&&((y-x)+1)/2<2*n+1){
				printf("%d\n",n);
				break;
			}
			n++;
			
		}		
		
	}
	
	return 0;
}
