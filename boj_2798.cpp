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

//ī���ǰ��� n�� �� 3�� �����ؼ� m�� ���� �ʴ� �ִ����� ���� ���� ��. 
int main(void){
	scanf("%d %d",&n,&m);
	
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	printf("%d",sumNum(n,m)); 
		
	
	return 0;
}
