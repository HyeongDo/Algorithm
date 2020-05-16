#include<iostream>
using namespace std;

int main(void){
	
	int n;
	int cnt =0;
	int cnt2 =0;
	for(int i=1;i<=8;i++){
		scanf("%d",&n);
		if(n==i){
			
			cnt++;
		}else if(n==8-(i-1)){
			cnt2++;
		}
	}
	
	if(cnt==8){
		printf("ascending");
	}else if(cnt2==8){
		printf("descending");
	}else{
		printf("mixed");
	}
	
	return 0;
}
