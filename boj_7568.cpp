#include<stdio.h>

int n;
int x[51];
int y[51];
int cnt;

void solve(int n){
	
	for(int i=0;i<n;i++){
		scanf("%d %d",&x[i],&y[i]);
	}
	
	/*
	
	���� ū ���, ���� ���� ����� �ƴ϶�
	�̻������ �� ū ����� �ֳ� x,y �� �� ŭ  
	�̻������ �� ���� ����� �ֳ� �� �������� ����. x,y �� �� ���� 
	 
	������ �� ū ����� �ֳ� (4���̴�) �׷��� 4��+1 5��.
	������ �� ū ����� ���� (0���̴�) �׷��� 0��+1 1��. 
	 
	*/
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(x[i]<x[j]&&y[i]<y[j]){
				cnt++;
			}
		}
		printf("%d ",cnt+1);
		cnt=0;
	}
	
}

int main(void){
	
	scanf("%d",&n);
	solve(n);
	
	
	return 0;
} 
