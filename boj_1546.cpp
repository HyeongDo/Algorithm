#include <stdio.h>

int arr[1001];
double new2[1001];
int input;
int max;
int temp;
double sum;
double inputTemp;

int main (void){
	
	scanf("%d",&input);
	
	for(int i=0;i<input;i++){
		scanf("%d",&temp);
		arr[i] = temp;		
		if(arr[i] >= max){
			max = arr[i];
		}
	}
	
	for(int j=0;j<input;j++){
		new2[j] = ((double)arr[j]/(double)max);
		sum += new2[j];
	}
	
	inputTemp = (sum/(double)input)*100;
	
	printf("%.2f",inputTemp);
	
	return 0;
}
