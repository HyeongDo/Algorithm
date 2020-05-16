#include<stdio.h>

int main(void){
	
	int N;
	scanf("%d",&N);
	
	//1줄 1/1
	//2줄 1->2 / 2->1
	//3줄 3->1 / 1->3
	//4줄 1->4 / 4->1 
	
	int temp = N;
	//i = 줄수 
	int i=1;
	//jol = 줄수
	int jol = 1;
	int res;
	//14 일때, 13 11 8 4  
	while(1){
		if(temp < i+1){
			if((i)%2!=0){
				//줄수가홀수일때
				//분자가 i+1 -> 1
				//분모가 1 -> i+1 
				printf("%d/%d",i-temp+1,temp);
				return 0;
			}else{
				//줄수가짝수일때 
				//분모가 i+1 -> 1 
				printf("%d/%d",temp,i-temp+1); 
				return 0;
			}
		}
		temp -= i;
		i++;
	}
	
	return 0;
}
