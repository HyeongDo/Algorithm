#include<stdio.h>

int n,m;
int arr[101];
int max=0;
int sum;

int sumNum(int n,int m){
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			for(int k=0;k<n;k++){
				if(i!=j&&j!=k&&k!=i){
					if(arr[i]+arr[j]+arr[k]<=m){
						if(max<=arr[i]+arr[j]+arr[k]){
							max=arr[i]+arr[j]+arr[k];
						}					
					}	
				}
			}
		}
	}
	return max;
}

//카드의갯수 n개 중 3개 조합해서 m을 넘지 않는 최대한의 수를 만들 것. 
int main(void){
	scanf("%d %d",&n,&m);
	
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	printf("%d",sumNum(n,m)); 
		
	
	return 0;
}
