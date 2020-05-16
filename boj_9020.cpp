#include<iostream>
#include<algorithm>
using namespace std;

int t;
int n;
bool arr[10001];
int num1,num2;
int min1=10001;
int temp;

void isPrime(){
	
	for(int i=2;i<=10000;i++){
		arr[i]=true;
	}
	
	for(int i=2;i<=10000;i++){
		if(arr[i]){
			for(int j=i*i;j<=10000;j+=i){
				arr[j]=false;
			}
		}
	}
}

int main(void){
	isPrime();
	scanf("%d",&t);
	
	for(int k=0;k<t;k++){
		scanf("%d",&n);
		for(int i=n;i>=2;i--){
			if(arr[i]==true&&arr[n-i]==true){
				temp = abs(n-i-i);
				if(min1>=temp){
					min1 = temp;
					num1=i;
					num2=n-i;
				}
			}
		}
		printf("%d %d\n",num1,num2);
		num1=0;
		num2=0;
		min1=10001;
	}
	
	return 0;
}
