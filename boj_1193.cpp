#include<stdio.h>

int main(void){
	
	int N;
	scanf("%d",&N);
	
	//1�� 1/1
	//2�� 1->2 / 2->1
	//3�� 3->1 / 1->3
	//4�� 1->4 / 4->1 
	
	int temp = N;
	//i = �ټ� 
	int i=1;
	//jol = �ټ�
	int jol = 1;
	int res;
	//14 �϶�, 13 11 8 4  
	while(1){
		if(temp < i+1){
			if((i)%2!=0){
				//�ټ���Ȧ���϶�
				//���ڰ� i+1 -> 1
				//�и� 1 -> i+1 
				printf("%d/%d",i-temp+1,temp);
				return 0;
			}else{
				//�ټ���¦���϶� 
				//�и� i+1 -> 1 
				printf("%d/%d",temp,i-temp+1); 
				return 0;
			}
		}
		temp -= i;
		i++;
	}
	
	return 0;
}
