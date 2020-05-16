#include<iostream>
using namespace std;

int t,n;

int dp2(int n){
	if(n==1) return 1;
	if(n==2) return 2;
	if(n==3) return 4;
	else{
	} return dp2(n-1)+dp2(n-2)+dp2(n-3);
}

int main(void){
	cin>>t;
	
	while(t--){
		cin>>n;
		cout<<dp2(n)<<endl;
	}
	
	return 0;
}
