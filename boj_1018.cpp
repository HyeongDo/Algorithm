#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int n,m;
//n 세로 m 가로 
string s;
char bw[51][51];
int min2=68;
int cnt;

int solve(int n,int m){
	/*
	n m 돌리고 
	8*8을 해서 최소값 찾음 -> 출력
	최소값 찾는 방법: 연속으로 나오면 안 됨. 
	*/
	
	for(int i=0;i<=n-8;i++){
		for(int j=0;j<=m-8;j++){
			cnt=0;
			
			for(int k=i;k<i+8;k++){
				for(int l=j;l<j+8;l++){
					if((k%2)^(l%2)){//xor 입니다  입력이 같으면 1 다르면 0 입니다. 따라서 짝홀,홀짝 
						if(bw[k][l]=='B') cnt++;//B든 W든 상관없다. 아래에서 64를뺀최소와 최소를 비교할 것이기 때문. 
					}
					else{//홀홀,짝짝입니다. 
						if(bw[k][l]=='W') cnt++;
					}
				}
			}
			
			min2 = min(min2,cnt);
			min2 = min(min2,64-cnt);
			
		}
	}
	return min2;
	
}


int main(void){
	
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++){
		cin>>s;
		for(int j=0;j<m;j++){
			bw[i][j]=s[j];	
		}
	}
	printf("%d",solve(n,m));
	
	return 0;
}
