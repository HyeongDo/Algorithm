#include<iostream>
using namespace std;

int n,t,p,dp[16];

int main(void){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>t>>p;
		dp[i]=max(dp[i+1],dp[i+t]+p);
//		dp[i+1]=max(dp[i],dp[i+1]);
//		/*
//		�������� ���� ���Ͱ� ���ñ����� ���� ��
//		*/
//		dp[i+t]=max(dp[i]+p,dp[i+t]);
//		/*
//		������ ���� �� �Ͱ� �� �� ���� ��. 
//		*/
	}
	cout<<dp[n-1]; 
	return 0;
}
