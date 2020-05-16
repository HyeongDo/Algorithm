#include<stdio.h>

int a,b,c;
int num = 1;
int main(void){
	
	scanf("%d%d%d",&a,&b,&c);
	//a 고정비용 b 유동비용 c 노트북가격
	//a+b*(x) < c*(x) 일때의 x를 구해라
	
	//a<(c-b)num
	//a/c-b < num

	if(b>=c){
		printf("-1");
		return 0;
	}
	
	num = a / (c-b)+1;
	
	printf("%d",num);
	 
	return 0;
}
