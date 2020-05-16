#include<iostream>
using namespace std;

int t,a,b;

int gcd(int x,int y){
	while(y!=0){
		int r=x%y;
		x=y;
		y=r;
	}
	return x;
}

int lcm(int x,int y){
	return x*y / gcd(x,y);
}

int main(void){
	cin>>t;
	while(t--){
		cin>>a>>b;
		cout<<lcm(a,b)<<endl;
	}
	
	return 0;
}
