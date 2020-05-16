#include<iostream>
using namespace std;
int nextNumber(int n){
	int p = n/10;
	int q = n%10;
	
	return q*10 + (p+q)%10;
}

int main (void){
	int n;
	scanf("%d",&n);
	int num = n;
	int cnt = 0;
	while(true){
		cnt++;
		num = nextNumber(num);
		if(num==n){
			break;
		}
	}
	printf("%d",cnt);
	return 0;
}
