#include<stdio.h>

int main(void){
	
	int n, m;
	scanf("%d %d",&n,&m);
	
	int m1,m2,m3;
	m1 = m/100;
	m2 = m/10 - (m/100)*10;
	m3 = m/1 - (m/10)*10;
	
	printf("%d\n",n*m3);
	printf("%d\n",n*m2);
	printf("%d\n",n*m1);
	printf("%d",n*m);
	
	return 0;
}
