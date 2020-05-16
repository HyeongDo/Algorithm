#include<stdio.h>

int n;
long long int arr[100];


int main(void){
	scanf("%d",&n);
	arr[0]=0;
	arr[1]=1;
	for(int i=2;i<=n;i++){
		arr[i]=arr[i-1]+arr[i-2];
	}
	printf("%lu",arr[n]);
	return 0;
}
