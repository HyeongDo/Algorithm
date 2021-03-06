#include<iostream>
using namespace std;

#define mod 1000000009 
long long t,d[100001][4];

int main(void){
	cin>>t;
	d[1][1]=1,d[1][2]=0,d[1][3]=0;
	d[2][1]=0,d[2][2]=1,d[2][3]=0;
	d[3][1]=1,d[3][2]=1,d[3][3]=1;
	for(int i=4;i<=100000;i++){
		d[i][1]=(d[i-1][2]+d[i-1][3])%mod;
		d[i][2]=(d[i-2][1]+d[i-2][3])%mod;
		d[i][3]=(d[i-3][1]+d[i-3][2])%mod;
	}
	while(t--){
		int n;
		cin>>n;		
		cout<<(d[n][1]+d[n][2]+d[n][3])%mod<<endl;
	}
	return 0;
}
