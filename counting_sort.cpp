#include<stdio.h>

int main (void){
	
	int number[6];
	int arr[20]={1,5,3,4,2,3,2,4,1,2,2,4,5,3,2,1,3,4,4,5};
	
	//1~5까지의 숫자갯수를 넣을 정렬 0개로 초기화 
	for(int i=1;i<=5;i++){
		number[i]=0;
	}
	
	//정렬에서 범위 내에 있는 숫자 카운트 
	for(int i=0;i<20;i++){
		number[arr[i]]++;
	}
	
	//1~5까지 범위내에서 카운트만큼 출력 
	for(int i=1;i<=5;i++){
		if(number[i]!=0){
			for(int j=0;j<number[i];j++){
				printf("%d ",i);
			}
		}
	}
	
	return 0;
}
