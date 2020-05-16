#include<stdio.h>

int x,y,w,h;
int minNum1;
int minNum2;
int res;
int main(void){
	scanf("%d %d %d %d",&x,&y,&w,&h);
	
	/*
	
	x는 0, w
	y는 0, h
	중에 가장 가까운 곳......?
	
	대각선은? 
	
	*/
	 
	 if(x-0-(w-x)>=0) minNum1=w-x;
	 else minNum1=x-0;
	 if(y-0-(h-y)>=0) minNum2=h-y;
	 else minNum2=y-0;
	 if(minNum1-minNum2>=0) printf("%d",minNum2);
	 else printf("%d",minNum1);
	
	return 0;
}
