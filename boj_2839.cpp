#include<iostream>
using namespace std;

int inp;

int sol(int n){
		
	//5로 나누고 안 되면 5를 하나씩 빼보며 3으로 나눈다.
	
	 int temp = 0;
	 
	//big은 5로 나눈 몫 
	 int big = n/5; 
	 
	 //18이면 big = 3 
	 //big-- 하면서 18-big*5 = 3 
	 //3나누기 3 으로 떨어지면 return;
	 
	 //17이면 big = 3
	 //17-big(3)*5 = 2
	 //2나누기 3으로 (%) 떨어지지 않으니 다시,
	 //17-big--(2)*5 = 7
	 //7나누기 3으로 떨어지지 않으니 다시,
	 //17-big--(1)*5 = 12
	 //12나누기 3으로 떨어지니 return; -> big+12/3 
	 
	 //6이면 big = 1
	 //6-big(1)*5 = 1
	 //1나누기 3으로 떨어지지 않으니 다시,
	 //6-big(0)*5 = 6
	 //6나누기 3으로 떨어지니 return; ->  big(0)+6/3
	 
	 
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
