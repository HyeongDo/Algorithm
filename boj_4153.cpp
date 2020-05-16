#include<stdio.h>

int a,b,c;

int main(void){
	
	while(1){
		scanf("%d %d %d",&a,&b,&c);
		if(a+b+c==0) break;
		
		if(a>=b && a>=c){
			if(a*a==(b*b+c*c)){
				printf("right\n");
			}else{
				printf("wrong\n");
			}
		}else if(b>=a && b>=c){
			if(b*b==(a*a+c*c)){
				printf("right\n");
			}else{
				printf("wrong\n");
			}
		}else if(c>=a && c>=b){
			if(c*c==(a*a+b*b)){
				printf("right\n");
			}else{
				printf("wrong\n");
			}
		}else{
			printf("wrong\n");
		}
	}
	
	return 0;
}
