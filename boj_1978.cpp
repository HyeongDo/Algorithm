#include<stdio.h>

int n;
int cnt;
int sum;
int main(void){
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		int temp=1;
		scanf("%d",&temp);
		for(int j=1;j<temp;j++){
			if(temp%j==0){
				cnt++;
			}
		}
		if(cnt==1) sum++;
		cnt=0;
	}
	printf("%d",sum);
	return 0;
}
