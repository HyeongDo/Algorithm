#include<iostream>
#include<algorithm>
using namespace std;

int n;
int dp[10001],st[10001];

int main(void){
	
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>st[i];
	}
	/*
		����°�� �����ϴ� ����� ����
		1. ù��°->����°
		2. �ι�°+����°->����° 
//	*/
	dp[0]=st[0];
	dp[1]=st[1]+st[0];
	for(int i=2;i<n;i++){
		dp[i]=dp[i-1];
		dp[i]=max(dp[i],dp[i-2]+st[i]);
		dp[i]=max(dp[i],dp[i-3]+st[i-1]+st[i]);
	}
	
	cout<<dp[n-1];
	
	return 0;
}
