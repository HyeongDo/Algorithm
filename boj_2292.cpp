#include<stdio.h>

int main(void){
	
	int N;
	scanf("%d",&N);
	
	// 1 2 9 22 41 66
	//  1 7 13 19 25
	// 1 1+6 1+6*2 1+6*3 1+6*4
	// 대각선으로 쭉 뻗을 경우, 
	// (시작번호 - 1) + 6 씩 더해나간다.
	// 1 7 19  
	//  6 12 
	
	// 1줄 -> 1 (범위 0) 
	// 2줄 -> 2~7 (범위 6)
	// 3줄 -> 8~19 (범위 12)
	// 4줄 -> 20~37 (범위 18)
	// 5줄 -> 38~61 (범위 24) 
	// 범위는 n = 1~5 일때, (n-1 * 6)으로 늘어난다.
	
	// 1 + ((n-1)*6)) 
	// 1+(n-1)*6 이고 (n-1)*6 씩 계속 더해준다.
	//  
	
	int  n = 1;
	int temp = 1; 
	int pre = 0;
	
	// 1  2      3       4
	// 1 1+6=7 7+12=19 19+18=37
	
	if(N==1){
		printf("1");
		return 0;
	}
	while(1){
		if(temp == N){
			printf("%d",n);
			return 0;
		}
		
		if(temp > N && pre+1 <= N){
			printf("%d",n);
			return 0;
		}
		pre = temp;
		n++;
		temp += (n-1)*6;
		//19+18 -> 37
	}
	
	return 0;
}
