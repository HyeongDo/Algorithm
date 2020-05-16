#include<iostream>
#include<algorithm>
using namespace std;

int n,a[100001],dp[100001],MAX;

int main(void){
	
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	dp[0]=a[0];
	MAX=a[0];
	
	/*
	dp는 합
	dp[i-1]+이번것이 크냐 아니면 이번것만 이 더 크냐의 문제
	i-1을 더해오는 것이기 때문에 하나 이전것으로 연속된 것의 합의 최댓값을 구할 수 있다. 
	*/
	
	for(int i=1;i<n;i++){
		dp[i] = max(dp[i-1]+a[i],a[i]);
	}
	
	for(int i=0;i<n;i++){
		MAX = max(MAX,dp[i]);
	}
	
	cout<<MAX;
	
	
	return 0;
}
