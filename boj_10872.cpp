#include<stdio.h>

int n;

int facto(int n){
	if(n==1) return n;
	else{
		return n*facto(n-1);
	}
}

int main(void){
	
	scanf("%d",&n);
	if(n==0){
		//0���丮���� 1�̴�. 
		printf("1");
		return 0;
	}
	else{
		printf("%d",facto(n));
	}
	return 0;
}
