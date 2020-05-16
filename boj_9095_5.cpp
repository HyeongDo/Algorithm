#include<iostream>
using namespace std;

int t,n,cnt;

void sol(int sum){
	if(sum==n){
		cnt++;
	}
	if(sum+1<=n) sol(sum+1);
	if(sum+2<=n) sol(sum+2);
	if(sum+3<=n) sol(sum+3);
}

int main(void){
	cin>>t;
	while(t--){
		cin>>n;
		sol(0);
		cout<<cnt<<endl;
		cnt=0;
	}
	
	return 0;
}
