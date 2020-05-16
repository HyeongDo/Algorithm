#include<iostream>
using namespace std;

int n,m,k,cnt;

int main(void){
	cin>>n>>m>>k;
	while(k<=n+m&&n>=0&&m>=0){
		n-=2;
		m-=1;
		cnt++;
	}
	cout<<cnt-1;
	return 0;
}
