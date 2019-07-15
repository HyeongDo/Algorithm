#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;

vector<int> v;
int main(void){
	int N,K;
	scanf("%d %d",&N,&K);
	
	int input;
	for(int i=0;i<N;i++){
		scanf("%d",&input);
		v.push_back(input);
	}
	
	sort(v.begin(),v.end());
	printf("%d",v[K-1]);
	
	return 0;
}
