#include<stdio.h>

int x,y,w,h;
int minNum1;
int minNum2;
int res;
int main(void){
	scanf("%d %d %d %d",&x,&y,&w,&h);
	
	/*
	
	x�� 0, w
	y�� 0, h
	�߿� ���� ����� ��......?
	
	�밢����? 
	
	*/
	 
	 if(x-0-(w-x)>=0) minNum1=w-x;
	 else minNum1=x-0;
	 if(y-0-(h-y)>=0) minNum2=h-y;
	 else minNum2=y-0;
	 if(minNum1-minNum2>=0) printf("%d",minNum2);
	 else printf("%d",minNum1);
	
	return 0;
}
