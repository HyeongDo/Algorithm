#include<cstdio>
using namespace std;

int t,n,m,x,y,cnt,a,b,c;

int main(void){
	scanf("%d",&t);
	while(t--){
		scanf("%d%d%d%d",&m,&n,&x,&y);
		x-=1,y-=1;
		bool ck=false;
		for(int k=x;k<m*n;k+=m){
			if(k%n==y){
				ck=true;
				printf("%d\n",k+1);
				break;
			}
		}
		if(!ck) printf("-1\n");
	}
	
	return 0;
}
