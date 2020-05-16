#include<stdio.h>

int cnt;
int n;
bool y[15],a[30],b[30];

void solve(int i){
	
	if(i==n){
		cnt++;
		return;
	}
	
	for(int j=0;j<n;j++){
		if(y[j]||a[i+j]||b[i-j+n-1]) continue;
		y[j]=a[i+j]=b[i-j+n-1]=true;
		solve(i+1);
		y[j]=a[i+j]=b[i-j+n-1]=false;
	}
	
	
}

int main(void){
	scanf("%d",&n);
	solve(0);
	printf("%d",cnt);
	return 0;
}
