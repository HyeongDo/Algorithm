#include<stdio.h>

int n;

void starPrint(int n){
	
	/*
	나머지 1이면 비어있음
	*/
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			int x=i,y=j;
			while(x){
				if(x%3==1&&y%3==1) break;
				x/=3, y/=3;
			}
			if(x==0) printf("*");
			else printf(" ");
		}
		printf("\n");
	}
	
}

int main(void){

	scanf("%d",&n);
	
	starPrint(n);
	
	return 0;	
}

