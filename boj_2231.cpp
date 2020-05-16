#include<stdio.h>

int n;
int nTemp;
int sum;

int solve(int n){
	
	for(int i=0;i<n;i++){
		sum = i, nTemp = i;
		while(nTemp){
			//216 10나누면 6 21 나누면 1 2 나누면 2
			//아.. 그냥 % 나머지 하고 계속 /나누고 더하면 되는구나 
			sum += nTemp%10;
			nTemp/=10;
		}
		if(sum==n){
			return i;
		}	
		if(i==n-1){
			return 0;
		}
	}
	
}

int main(void){
	
	scanf("%d",&n);
	printf("%d",solve(n));
	
	return 0;
}
