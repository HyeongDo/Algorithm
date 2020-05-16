#include<stdio.h>

int t, k, n;
int arr[15][15];
int main(void){
	
	scanf("%d",&t);
	
	//0Ãþ iÈ£ i¸í »ê´Ù. 
	
	while(t--){	
	//kÃþnÈ£
	 
	//4Ãþ 1 6 21 56 111 222
	//3Ãþ 1 5 15 35 55 111
	//2Ãþ 1 4 10 20 35 56 (6 10 15 ...)
	//1Ãþ 1 3 6 10 15 21 (3 4 5....)
	//0Ãþ 1 2 3 4 5 6 (1¾¿ Áõ°¡)
	
	
	for(int i=0;i<=14;i++){
		arr[i][0]=1;
	}
	
	for(int i=0;i<=14;i++){
		arr[0][i]=i+1;
	}
	
	for(int i=1;i<15;i++){
		for(int j=1;j<15;j++){
			arr[i][j]=arr[i-1][j]+arr[i][j-1];		
		}
	} 
	
		scanf("%d%d",&k,&n);
		printf("%d\n",arr[k][n-1]);
	}
	
	
	return 0;
} 
