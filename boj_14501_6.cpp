#include<iostream>
using namespace std;

int n,t,p,d[25];

int main(void){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>t>>p;
		d[i+1]=max(d[i+1],d[i]);
		d[i+t]=max(d[i]+p,d[i+t]);
	}
	cout<<d[n+1];	
	return 0;
}
