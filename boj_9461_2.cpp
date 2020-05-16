#include<iostream>
using namespace std;

int n;
long long d[101];

int main(void){
	cin>>n;
	d[1]=1,d[2]=1,d[3]=1;
	for(int i=4;i<=100;i++){
		d[i]=d[i-2]+d[i-3];
	}
	while(n--){
		int x;
		cin>>x;
		cout<<d[x]<<endl;
	}
	
	return 0;
}
