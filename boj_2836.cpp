#include<stdio.h>

int inp;
int temp1, temp2; 
int cnt1,cnt2;
int main(void){
	
	scanf("%d",&inp);
	
	//3으로 먼저 나누고 5로 나누었을 때 갯수와
	//5로 먼저 나누고 3으로 나누었을 때 갯수를 비교
	//min 출 력 
	
	temp1 = inp;
	temp2 = inp;
	
	cnt1+=temp1/3;
	temp1=temp1%3;
	temp1%=3;
	cnt1+=temp1/5;
	temp1=temp1%5;
	temp1%=5;
	if(temp1!=0){
		cnt1=0;
	}
	printf("1: %d\n",cnt1);
		
	cnt2+=temp2/5;
	temp2=temp2%5;
	temp2%5;
	cnt2+=temp2/3;
	temp2=temp2%3;
	temp2%3;
	if(temp2!=0){
		cnt2=0;
	}
	printf("2: %d\n",cnt2);
	
	if(cnt1==0&&cnt2!=0){
		printf("%d",cnt2);
	}else if(cnt1!=0&&cnt2==0){
		printf("%d",cnt1);
	}else if(cnt1!=0&&cnt2!=0){
		if(cnt1<=cnt2){
			printf("%d",cnt1);
		}else if(cnt1>cnt2){
			printf("%d",cnt2);
		}
	}else{
		printf("-1");
	}
	
	return 0;
}
