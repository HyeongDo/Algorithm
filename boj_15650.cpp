#include<iostream>
#include<vector>
using namespace std;

int n,m;
vector<int> arr, brr;

void solve(int cnt){
	
	if(arr.size()==m){
		for(int i=0;i<arr.size();i++){
			printf("%d ",arr[i]);
		}
		printf("\n");
		return;
	}
	
	for(int i=cnt;i<brr.size();i++){
		arr.push_back(brr[i]);
		printf("�� cnt: %d i: %d ��� ���� ����: %d �� ��:%d\n",cnt,i,arr.size(),brr[i]);
		solve(i+1);
		arr.pop_back();
		printf("����   cnt: %d i: %d ��� ���� ����: %d ������ �� ��:%d\n",cnt,i,arr.size(),brr[i]);
		for(int j=0;j<arr.size();j++){
			printf("%d ",arr[j]);
		}
		printf("\n");
	}
	
}

int main(void){
	
	scanf("%d %d",&n,&m);
	for(int i=1;i<=n;i++){
		brr.push_back(i);
	}
	
	solve(0);
	
	return 0;
}
