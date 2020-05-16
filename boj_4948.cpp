#include<stdio.h>
int n=1;
int cnt;
bool arr[246913];

void isPrime(){
	
	for(int i=2;i<=246912;i++){
		arr[i]=true;
	}
	
	for(int i=2;i*i<=246912;i++){
		if(arr[i]){
			for(int j=i*i;j<=246912;j+=i)
			{
				arr[j]=false;	
			}
		}
	}
}
// 13 17 19 23 
int main(void){
	
	isPrime();
	
	while(n){
		scanf("%d",&n);
		if(n==0) break;
		for(int i=n+1;i<=2*n;i++){
			if(arr[i]==true){
				cnt++;
			}
		}
		printf("%d\n",cnt);
		cnt=0;
	}
	
	return 0;
} 
