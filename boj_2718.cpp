#include<iostream>
#include<vector>
using namespace std;

int t,n;
int d[1001];

int main(void){
	cin>>t;
	
	d[0]=0;
	d[1]=1;
	d[2]=5;
	d[3]=11;
	
	while(t--){
		cin>>n;
		cout<<d[n]<<endl;
	}
	
	return 0;
}
