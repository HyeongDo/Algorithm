#include<iostream>
using namespace std;

int n,p[16],t[16],d[16];

int main(void){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>t[i]>>p[i];
		d[i+1]=max(d[i]+p[i],d[i+1]);
		d[t[i]+i]=max(d[t[i]+i],d[i+1]);
	}
	cout<<d[n+1];
	return 0;
}
