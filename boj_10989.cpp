#include <stdio.h>

int count[10001];
int main(void){
	
	//N�� ���� �־��� 
	int N;
	scanf("%d ",&N);
	
	//input �����鼭 �ٷ� count �Ѵ�. 
	int input;
	for(int i=0;i<N;i++){
		scanf("%d",&input);
		count[input]++;
	}
	
	//count ���� ��� 
	for(int i=1;i<=10000;i++){
		for(int j=0;j<count[i];j++){
			printf("%d\n",i);
		}
	}
	
	return 0;
}
