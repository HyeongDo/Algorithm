#include<stdio.h>

int a,b,c;
int num = 1;
int main(void){
	
	scanf("%d%d%d",&a,&b,&c);
	//a ������� b ������� c ��Ʈ�ϰ���
	//a+b*(x) < c*(x) �϶��� x�� ���ض�
	
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
