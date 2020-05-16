#include<stdio.h>

int m,n;
int cnt;
int sum;
int min = 101;

int main(void){
	
	scanf("%d%d",&m,&n);
	
	for(int i=m;i<=n;i++){
		if(i==1){
			cnt=1;
		}else{
			for(int j=2;j<i;j++){
				if(i%j==0) {
					cnt=1;
					break;
				}
			}
		}
		if(cnt==0){
			sum+=i;
			if(min>i){
				min = i;
			}
		}
		cnt=0;
	}
	
	if(sum==0){
		printf("-1");
	}
	else {
		printf("%d\n%d",sum,min);	
	}
	
	return 0;
}
