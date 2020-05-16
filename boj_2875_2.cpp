#include<iostream>
using namespace std;

int n,m,k,cnt;

int main(void){
	cin>>n>>m>>k;
	while(n>=0&&m>=0&&n+m>k){
		cnt++;
		n-=2;
		m-=1;
		if(n+m==k){
			cnt++;
			break;
		}
	}
	cout<<cnt-1;
	return 0;
}
