#include<iostream>
using namespace std;

int n;
long long int p[10001],d[10001],MAX;

int main(void){
	cin>>n;
	for(int i=0;i<n;i++) cin>>p[i];
	d[0]=p[0];
	d[1]=d[0]+p[1];
	for(int i=2;i<n;i++){
		d[i]=d[i-1];
		d[i]=max(d[i],d[i-2]+p[i]);
		d[i]=max(d[i],d[i-3]+p[i-1]+p[i]);
	}
	cout<<d[n-1];
	return 0;
}
