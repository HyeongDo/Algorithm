#include<iostream>
using namespace std;

int inp;

int sol(int n){
		
	//5�� ������ �� �Ǹ� 5�� �ϳ��� ������ 3���� ������.
	
	 int temp = 0;
	 
	//big�� 5�� ���� �� 
	 int big = n/5; 
	 
	 //18�̸� big = 3 
	 //big-- �ϸ鼭 18-big*5 = 3 
	 //3������ 3 ���� �������� return;
	 
	 //17�̸� big = 3
	 //17-big(3)*5 = 2
	 //2������ 3���� (%) �������� ������ �ٽ�,
	 //17-big--(2)*5 = 7
	 //7������ 3���� �������� ������ �ٽ�,
	 //17-big--(1)*5 = 12
	 //12������ 3���� �������� return; -> big+12/3 
	 
	 //6�̸� big = 1
	 //6-big(1)*5 = 1
	 //1������ 3���� �������� ������ �ٽ�,
	 //6-big(0)*5 = 6
	 //6������ 3���� �������� return; ->  big(0)+6/3
	 
	 
	 if(n-big*5 == 0){
	 	return big;
	 }
	 
	 while(big+1){
	 	temp = n-big*5;
	 	if(temp%3!=0){
	 		big--;
		 }
		 else{
		 	return big+temp/3;
		}
		if(big<0){
			return -1;
		}
	 }	
	 
	 if(big == 0){
	 	return -1;
	 }
	
}

int main(void){
	
	cin>>inp;
	
	printf("%d",sol(inp));
	
	return 0;
}
