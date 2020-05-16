#include<stdio.h>

int onesu(int input){
	int han = 0;
	int temp = 0;
	int arr[3];
	int j=0;
	
	for(int i=1;i<=input;i++){
		
		if(i<100){
			han = i;
		}
		else if(i==1000){
			break;
		}else{
			j = 0;
			temp = i;
			while(temp){
				arr[j] = temp%10;
				temp /= 10;
				j++;
			}
			if(arr[0]-arr[1] == arr[1]-arr[2]){
				han++;
			}
		}
	}
	
	return han;
}


int main(void){
	int input;
	scanf("%d",&input);
	int out;
	out = onesu(input);
	printf("%d",out);
		
	
	return 0;
}
