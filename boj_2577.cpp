#include<iostream>
using namespace std;
int arr[10];
int main(void){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	int num = a*b*c;
	
	while(num!=0){
		arr[num%10]+=1;
		num/=10;
	}
	
	for(int i=0;i<10;i++){
		printf("%d\n",arr[i]);
	}
	
	return 0;
}
