#include <stdio.h>

int count[10001];
int main(void){
	
	//N개 수가 주어짐 
	int N;
	scanf("%d ",&N);
	
	//input 받으면서 바로 count 한다. 
	int input;
	for(int i=0;i<N;i++){
		scanf("%d",&input);
		count[input]++;
	}
	
	//count 갯수 출력 
	for(int i=1;i<=10000;i++){
		for(int j=0;j<count[i];j++){
			printf("%d\n",i);
		}
	}
	
	return 0;
}
