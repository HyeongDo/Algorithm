#include<iostream>
using namespace std;

int aa,bb;
int a[3];
int b[3];
int temp1, temp2;

int main(void){
	
	cin>>aa;
	cin>>bb;
	temp1 = aa;
	temp2 = bb;
	for(int i=0;i<3;i++){
		a[i] = temp1%10;
		temp1 /= 10;
		
		b[i] = temp2%10;
		temp2 /= 10;		
	}
	
	//printf("%d%d%d\n",a[0],a[1],a[2]);
	//printf("%d%d%d\n",b[0],b[1],b[2]);
	
	if(a[0]>b[0]){
		printf("%d%d%d",a[0],a[1],a[2]);
	}else if(a[0]==b[0]){
		if(a[1]>b[1]){
			printf("%d%d%d",a[0],a[1],a[2]);	
		}else if(a[1] == b[1]){
			if(a[2]>b[2]){
				printf("%d%d%d",a[0],a[1],a[2]);
			}else if(a[2]==b[2]){
				printf("%d%d%d",a[0],a[1],a[2]);
			}else if(a[2]<b[2]){
				printf("%d%d%d",b[0],b[1],b[2]);
			}
		}else if(a[1]<b[1]){
			printf("%d%d%d",b[0],b[1],b[2]);
		}
	}else{
		printf("%d%d%d",b[0],b[1],b[2]);
	}
	
	return 0;
}
