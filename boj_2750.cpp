#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int arr[1001];

int main(void){
	
	int N;
	cin>>N;
	
	for(int i=0;i<N;i++){
		scanf("%d",&arr[i]);
	}
	
	sort(arr,arr+N);
	
	for(int i=0;i<N;i++){
		printf("%d\n",arr[i]);
	}
	
	return 0;
}
