#include<iostream>
using namespace std;

int n,p[10001],d[10001];
int main(void){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>p[i];
	}
	for(int i=1;i<=n;i++){
		d[i]=p[i];
		for(int j=1;j<i;j++){
			d[i]=min(d[i],d[i-j]+p[j]);
		}
	}
	cout<<d[n];
	return 0;
}
