#include<stdio.h>

int solo(int i){
	int res = i;
	if(i>=10000){
		res+=i/10000;
		i%=10000;
	}
	if(i>=1000){
		res+=i/1000;
		i%=1000;
	}
	if(i>=100){
		res+=i/100;
		i%=100;
	}
	if(i>=10){
		res+=i/10;
		i%=10;
	}	
	return res+=i;
}

int arr[10001];

int main(void){
	
	for(int i=1;i<=10000;i++){
		arr[solo(i)] = 1;
		if(!arr[i]){
			printf("%d\n",i);
		}
	}
	
	return 0;
}
