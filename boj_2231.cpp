#include<stdio.h>

int n;
int nTemp;
int sum;

int solve(int n){
	
	for(int i=0;i<n;i++){
		sum = i, nTemp = i;
		while(nTemp){
			//216 10������ 6 21 ������ 1 2 ������ 2
			//��.. �׳� % ������ �ϰ� ��� /������ ���ϸ� �Ǵ±��� 
			sum += nTemp%10;
			nTemp/=10;
		}
		if(sum==n){
			return i;
		}	
		if(i==n-1){
			return 0;
		}
	}
	
}

int main(void){
	
	scanf("%d",&n);
	printf("%d",solve(n));
	
	return 0;
}
