#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

pair<int,int> arr[100001];

bool compare(pair<int,int>a,pair<int,int>b){
	if(a.second!=b.second){
		return a.second<b.second;
	}
	
	return a.first<b.first;
	
}

int main(void){
	
	int N;
	cin>>N;
	
	for(int i=0;i<N;i++){
		int x,y;
		scanf("%d %d",&x,&y);
		arr[i]=make_pair(x,y);
	}
	
	sort(arr,arr+N,compare);
	
	for(int i=0;i<N;i++){
		printf("%d %d\n",arr[i].first,arr[i].second);
	}
	
	return 0;
}
