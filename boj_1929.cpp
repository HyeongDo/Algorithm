#include<stdio.h>
int m,n;
bool arr[1000001];

void isPrime(){
	
	for(int i=2;i<=1000000;i++){
		arr[i]=true;
	}
	
	for(int i=2;i*i<=1000000;i++){
		if(arr[i]){
			for(int j=i*i;j<=1000000;j+=i){
				arr[j]=false;
			}
		}
	}
	
}


int main(void){
	scanf("%d %d",&m,&n);
	
	//에라토스테네스의 체를 이용 
	
	isPrime();
	
	for(int i=m;i<=n;i++){
		if(arr[i]==true) {
			printf("%d\n",i);
		} 
	} 
	
	
	return 0;
}
