#include<stdio.h>

int main (void){
	
	int number[6];
	int arr[20]={1,5,3,4,2,3,2,4,1,2,2,4,5,3,2,1,3,4,4,5};
	
	//1~5������ ���ڰ����� ���� ���� 0���� �ʱ�ȭ 
	for(int i=1;i<=5;i++){
		number[i]=0;
	}
	
	//���Ŀ��� ���� ���� �ִ� ���� ī��Ʈ 
	for(int i=0;i<20;i++){
		number[arr[i]]++;
	}
	
	//1~5���� ���������� ī��Ʈ��ŭ ��� 
	for(int i=1;i<=5;i++){
		if(number[i]!=0){
			for(int j=0;j<number[i];j++){
				printf("%d ",i);
			}
		}
	}
	
	return 0;
}
