#include<stdio.h>

long long n,max=-1e9,min=1e9;
int arr[11];
int brr[4];

void solve(int i, int ans, int add, int sub, int mul, int div){
	
	if(i==n){
		if(ans>max) max = ans;
		if(ans<min) min = ans;
		return;
	}
	
	if(add) solve(i+1,ans+arr[i],add-1,sub,mul,div);
	if(sub) solve(i+1,ans-arr[i],add,sub-1,mul,div);
	if(mul) solve(i+1,ans*arr[i],add,sub,mul-1,div);
	if(div) solve(i+1,ans/arr[i],add,sub,mul,div-1);
	
}

int main(void){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	for(int i=0;i<4;i++){
		scanf("%d",&brr[i]);
	}
	solve(1,arr[0],brr[0],brr[1],brr[2],brr[3]);
	
	printf("%d\n%d",max,min);
	return 0;
}
