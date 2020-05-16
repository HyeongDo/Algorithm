#include<iostream>
#include<algorithm>
using namespace std;

int n,k,g[11],chk;

int main(void){
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>g[i];
	}
	
	for(int i=n-1;i>=0;i--){
		while(k>=g[i]){
			k=k-g[i];
			chk++;
		}
	}
	cout<<chk;
	
	return 0;
}
