#include<iostream>
#include<algorithm>
using namespace std;

int n;
int st[301];
int sum[301]; 

int main(void){
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&st[i]);
	}
	
	sum[1]=st[1];//sum 초기값지정 
	for(int i=2;i<=n;i++){
		sum[i]=max(sum[i-3]+st[i-1],sum[i-2])+st[i];
	}
	
	printf("%d",sum[n]);
	
	return 0;
}
