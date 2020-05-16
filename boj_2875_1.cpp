#include<iostream>
using namespace std;

int n,m,k,cnt;

int main(void){
	cin>>n>>m>>k;
	
	while(n+m>=k&&n>=0&&m>=0){
		cnt++;
		n-=2,m-=1;
	}
	
	cout<<cnt-1;
	
	return 0;
}
