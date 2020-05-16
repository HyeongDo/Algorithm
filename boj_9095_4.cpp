#include<iostream>
using namespace std;

int t,n,d[11];

int main(void){
	cin>>t;
	d[1]=1,d[2]=2,d[3]=4;
	for(int i=4;i<=10;i++){
		d[i]=d[i-1]+d[i-2]+d[i-3];
	}
	while(t--){
		cin>>n;
		cout<<d[n]<<endl;
	}
	return 0;
}
