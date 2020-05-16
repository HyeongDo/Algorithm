#include<iostream>
#include<queue>
using namespace std;

int chk, N, K;
vector<int> v;
int cnt;
int main (void){
	
	scanf("%d %d",&N,&K);

	for(int i=1;i<=N;i++){
		v.push_back(i);
	}
	
	while(1){
		
		chk = (chk + K)%N -1;
		
		printf("%d",v[chk]);
		
		cnt += 1;
		
		if(cnt==N){
			break;
		}
			
	}
	
	return 0;
}
