#include<iostream>
using namespace std;

int n,t,p,d[16];

int main(void){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>t>>p;
		d[i+1]=max(d[i+1],d[i]);
		d[i+t]=max(d[i]+p,d[i+t]);
	} 
	cout<<d[n];
	return 0;
}
