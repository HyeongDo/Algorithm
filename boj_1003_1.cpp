#include<iostream>
using namespace std;

int t,n,fibo[2][41];

int main(void){
	cin>>t;
	fibo[0][0]=1;
	fibo[1][1]=1;
	
	for(int i=2;i<=40;i++){
		fibo[0][i]=fibo[0][i-1]+fibo[0][i-2];
		fibo[1][i]=fibo[1][i-1]+fibo[1][i-2];
	}
	while(t--){
		cin>>n;
		cout<<fibo[0][n]<<" "<<fibo[1][n]<<endl;
	}
	
	return 0;
}
