#include<stdio.h>

int n;
int cnt;
int temp;
int out;
int chk;

void solve(int n){
	
	while(++out){
		temp = out;
		chk=0;
		while(temp){
			if(temp%1000==666){
				chk=1;
			}
			temp/=10;
		}
		if(chk){
			cnt++;
			if(cnt==n){
				break;
			}
		}
	}
	
	printf("%d",out);
	
}

int main(void){
	
	scanf("%d",&n);
	solve(n);
	
	return 0;
}
