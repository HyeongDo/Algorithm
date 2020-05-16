#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;


int t;
int x1;
int y11;
int r1,x2,y2,r2;
int root1,root2;
bool arr1[20001][20001];
bool arr2[20001][20001];
int cnt;
int minx,miny;
int maxx,maxy;
int maxr;

int main(void){
	scanf("%d",&t);
	
	while(t--){
		
		scanf("%d %d %d %d %d %d",&x1,&y11,&r1,&x2,&y2,&r2);
		/*
		1. x1,y1으로 r1이 만족되는 좌표찾기
		2. x2,y2로 r2가 만족되는 좌표찾기
		
		같은 좌표 갯수 cnt++;
		
		무한대일 경우 -1
		
		while끝나기직전에 cnt=0; 
		
		*/
		for(int i=x1;i<=r1;i++){
			for(int j=y11;j<=r1;j++){
				root1=sqrt(x1*x1+y11*y11);
				if(root1==r1){
					arr1[i][j]=true;
				}	
			}
		}
		for(int i=x2;i<=r2;i++){
			for(int j=y2;j<=r2;j++){
				root2-sqrt(x2*x2+y2*y2);
				if(root2==r2){
					arr2[i][j]=true;
				}
			}
		}
		
		minx = min(x1,x2);
		miny = min(y11,y2);
		maxx = max(x1,x2);
		maxy = max(y11,y2);
		maxr = max(r1,r2);
		
		for(int i=minx;i<=maxx;i++){
			for(int j=miny;j<=maxy;j++){
				if(arr1[i][j]==true&&arr2[i][j]){
					cnt++;
				}
				if(cnt>maxr){
					break;
				}
			}
			
		}
		
		if(cnt>maxr) cnt = -1;
				
		printf("%d\n",cnt);
		cnt=0;
		minx=0;miny=0;maxx=0;maxy=0;maxr=0;
	}
	
	return 0;
}
