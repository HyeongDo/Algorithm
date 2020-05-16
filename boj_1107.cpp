/*
+ -> 1
- -> -1
0에서 -누르면 채널이 변하지 않음
채널은 무한대
n으로 이동하기 위해 버튼을 최소 몇번 눌러야하는지 구하는 것
현재 위치는 100 
1. 이동하려는 번호를 누를 수 있으면 한번에 간다.
2. 번호가 망가진 경우
2-1. 일정한 번호로 간다. -> + 또는 -를 한다. 
2-2. 바로 +또는 -를 한다. 

=>100에 가까운 시작지점을 잡아준다.

1. n에 가깝고
2. false인 0~9사이의 수로 만든다.
=> 찾는 거 자리수 버튼 갯수
==> 역으로 수를 찾으면서 0~9중에 가능한 것 중에서 가장 가까운 수를 찾는다.
 
+

1. 그 수에서 n차이 버튼 갯수
 
511111(6개버튼)+11111개(-버튼 1개) = 111117개 
*/

#include<iostream>
using namespace std;

int n,m,su=100,mn;
bool btn[11];

int ck(int num){
	if(num==0){
		if(btn[num]==true){
			return 0;
		}else{
			return 1;
		}
	}
	int numSize=0;
	while(num>0){
		if(btn[num%10]==true) return 0;
		numSize++;
		num/=10;	
	}
	return numSize;
} 

int main(void){
	cin>>n>>m;
	int tmp;
	for(int i=0;i<m;i++){
		cin>>tmp;
		btn[tmp]=true;//안되는 채널을 true 
	}
	
	int ans = n-100;
	if(ans<0) ans=-ans;
	
	for(int i=0;i<=1000000;i++){
		int numSize=ck(i);
		if(numSize>0){
			int btnAble=i-n;
			if(btnAble<0) btnAble=-btnAble;
			if(ans>numSize+btnAble) ans=numSize+btnAble;
		}
	}
	cout<<ans;
	
	return 0;
}
