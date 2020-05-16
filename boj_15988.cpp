#include<iostream>
using namespace std;
#define mod 1000000009

long long n,d[1000001];

long long f(long long a){
	if(d[a]) return d[a]%mod;
	else return d[a]=(f(a-1)+f(a-2)+f(a-3))%mod;
}

int main(void){
	cin>>n;
	d[1]=1,d[2]=2,d[3]=4,d[4]=7;
	int t;
	for(int i=0;i<n;i++){
		cin>>t;
		cout<<f(t)%mod<<endl;
	}
	return 0;
}
