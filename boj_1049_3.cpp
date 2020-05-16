#include<iostream>
using namespace std;

int n,m,s=1001,o=1001,t1,t2,don;

int main(void){
	cin>>n>>m;
	for(int i=0;i<m;i++){
		cin>>t1>>t2;
		s=min(t1,s);
		o=min(t2,o);
	}
	while(n>0){
		if(n<6){  
			if(o*n<=s){
				don+=n*o;
				n-=n;
			}else{
				don+=s;
				n-=6;
			}
		}else{
			if(o*6<s){
				don+=n*o;
				n-=n;
			}else{
				don+=s;
				n-=6;
			}
		}
	}
	cout<<don;
	
	return 0;
}
