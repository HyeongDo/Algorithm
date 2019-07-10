#include<stdio.h>

int main(void){
	
	int i,j,temp;
	int arr[10]={10,5,3,4,7,8,9,6,1,2};
	
	for(i=0;i<10;i++){
		j=i;
		
		while(j>=0 && arr[j]>arr[j+1]){
			temp=arr[j+1];
			arr[j+1]=arr[j];
			arr[j]=temp;
			j--;
		}
	}
	
	for(int i=0;i<10;i++){
		printf("%d ",arr[i]);
	}
	
	return 0;
}
