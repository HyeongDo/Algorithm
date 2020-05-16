#include<iostream>
using namespace std;

int n,m;

int main(void){
	cin>>n>>m;
	if(n==1){
		cout<<1;
	}
	else if(n==2){
		if(m<=6){
			cout<<(m+1)/2;
		}else{
			cout<<4;
		}
	}else{
		if(m<=4) cout<<m;
		else if(m==5||m==6) cout<<4;
		else{
			cout<<m-2;
		}
	}
	
	return 0;
}
