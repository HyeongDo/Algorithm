#include<iostream>
#include<algorithm>
using namespace std;

int n,ans=1e9;
int s[20][20];
bool c[20];//스타트팀true,링크팀false -> i,j중 하나만 체크하면 됨. 

void solve(int cnt,int index){//cnt n/2까지만 세면 됨, index는 n-1까지있다. 
	if(index==n) return;
	if(cnt==n/2){
		int s1=0,s2=0;//스타트팀, 링크팀	
		for(int i=0;i<n;i++){//능력치를 구하는 과정 
			for(int j=0;j<n;j++){
				//s[i][j]의경우의수를하나씩다해본것.
				if(c[i]&&c[j]) s1+=s[i][j]; //ij가true면 ji도 true라서 s1에 ij ji 다 들어감 
				if(!c[i]&&!c[j]) s2+=s[i][j]; //마찬가지다. 
			}
		}
		ans = min(ans,abs(s1-s2));//ans와 s1-s2중 최저를 비교
		return;
	}
	c[index]=true;
	solve(cnt+1,index+1);
	c[index]=false;
	solve(cnt,index+1);
	/*
	cnt 안 올리는 이유는??
	c[index]=true햇고 c[index]=false로해보는데
	index는 0~19까지의 수에 대해 하는 것이고
	cnt는 팀원의 수를 의미한다.
	따라서 팀원중 한명이 true가 아닌 false로 변경하고 
	true일때만 cnt를 올린다.(한 팀만 체크하기 위해) 
	*/
}

int main(void){
	
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&s[i][j]);
		}
	}
	solve(0,0);
	printf("%d",ans);
	
	return 0;
}
