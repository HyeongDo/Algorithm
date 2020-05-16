#include<stdio.h>

int arr[6];
bool chk[6];

int main(void){
	
	scanf("%d %d",&arr[0],&arr[1]);
	scanf("%d %d",&arr[2],&arr[3]);
	scanf("%d %d",&arr[4],&arr[5]);
	
	for(int i=0;i<6;i+=2){
		for(int j=i+2;j<6;j+=2){
			if(arr[i]==arr[j]){
				if(chk[i]==false&&chk[j]==false){
					chk[i]=true;
					chk[j]=true;
				}
			}
		}
	}
	
	for(int i=1;i<6;i+=2){
		for(int j=i+2;j<6;j+=2){
			if(arr[i]==arr[j]){
				if(chk[i]==false&&chk[j]==false){
					chk[i]=true;
					chk[j]=true;
				}
			}
		}
	}
	
	for(int i=0;i<6;i+=2){
		if(chk[i]==false){
			printf("%d ",arr[i]);
		}
	}
	
	for(int i=1;i<6;i+=2){
		if(chk[i]==false){
			printf("%d",arr[i]);
		}
	}
	
	return 0;
}
