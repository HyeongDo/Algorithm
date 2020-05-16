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
	dp�� ��
	dp[i-1]+�̹����� ũ�� �ƴϸ� �̹��͸� �� �� ũ���� ����
	i-1�� ���ؿ��� ���̱� ������ �ϳ� ���������� ���ӵ� ���� ���� �ִ��� ���� �� �ִ�. 
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
