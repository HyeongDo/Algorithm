#include<stdio.h>


int data[10]={10,7,3,4,8,2,1,5,6,9};

void quickSort(int *data,int start,int end){
	if(start>=end){
		return;
	}
	
	int key = start;
	int i = start + 1;
	int j = end;
	int temp;
	
	while(i<=j){
		while(i<=end && data[i]<=data[key] ){
			i++;
		}
		while(j>start && data[j]>=data[key]){
			j--;
		}
		if(i>j){
			temp = data[j];
			data[j]=data[key];
			data[key]=temp;
			
			
		}else{
			temp = data[i];
			data[i]=data[j];
			data[j]=temp;
		}
	}
	
	
	quickSort(data,start , j-1);
	quickSort(data,j+1, end);
}



int main(void){
	
	quickSort(data,0,9);
	
	for(int i=0;i<10;i++){
		printf("%d ",data[i]);
	}
	
	return 0;
}
