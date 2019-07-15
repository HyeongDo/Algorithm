#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

pair<int,int> arr[100001];

bool compare(pair<int,int>a,pair<int,int>b){
	if(a.first!=b.first){
		return a.first<b.first;
	}
	
	return a.second<b.second;	
}

int main (void){
	
	int N;
	cin>>N;
	
	int x,y;
	
	for(int i=0;i<N;i++){
		scanf("%d %d",&x,&y);
		arr[i]=make_pair(x,y);
	}
	
	sort(arr,arr+N,compare);
	
	for(int i=0;i<N;i++){	
		printf("%d %d\n",arr[i].first,arr[i].second);
	}	
	
	
	return 0;
} 
