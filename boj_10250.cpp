#include<stdio.h>

int inp;
int h,w,n;
int temp;
int main(void){
	
	scanf("%d",&inp);
	
	//h 높이 w 넓이 
	//n 인풋
	
	// h n
	// 6 10 = 402
	// 30 72 = 1203
	// 1 4 = 104
	// 1 5 = 105
	// 5 1 = 501
	// 4 5 = 102
	
	// n h
	// 10 6 = 나머지4, 6으로 첫번째로 10을 넘을 수 있을 배수 : 2
	// 72 30 = 나머지12, 30으로 첫번째로 72를 넘을 수 있을 배수 : 3
	// 1 5 = 나머지 5, 5로 첫번째로 1을 넘을 수 있을 배수 : 1 (501)
	// 5 4 = 나머지 1, 4로 첫번째로 5를 넘을 수 있을 배수 : 2 (102)
	//-> 4 2 5
	// 4 5 = 나머지 4, 5로 첫번째로 4를 넘을 수 있을 배수 : 1 (401) 
	//-> 5 2 4  

	 
	//딱떨어지는수 
	// 4  1 = 나머지+1 -> 1, 1로 첫번째로 4가 되는 배수 : 4
	// 5  1 = 나머지+1 -> 1, 1로 첫번째로 5가 되는 배수 : 5  
	
	// 4 5 8 
	// 8  4 = 나머지+1 -> 1, 4로 첫번째로 8이 되는 배수 : 2
	//(402)가 나와야 함 
	// 1 2 9
	// 9  1 = 
	 
	while(inp--){
		scanf("%d%d%d",&h,&w,&n);
		
		//나는n%h == 0일때를 if로하고
		//이건 n%h 일대를 if로 했다. 
		
		if(n%h){
			if(n/h+1>=10){
				printf("%d%d\n",n%h,n/h+1);
			}else{
				printf("%d0%d\n",n%h,n/h+1);
			}
		}else{
			if(n/h>=10){
				printf("%d%d\n",h,n/h);
			}else{
				printf("%d0%d\n",h,n/h);
			}
		}
		
		
	}	
	
	return 0;
}
