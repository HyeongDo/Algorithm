#include<iostream>
using namespace std;

int t,n,num[101];
long long sum;

int gcd(int x,int y){
	while(y!=0){
		int r=x%y;
		x=y;
		y=r;
	}
	return x;
}

int main(void){
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>num[i];
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(i!=j){
					sum+=gcd(num[i],num[j]);
				}
			}
		}
		cout<<sum/2<<endl;
		sum=0;
	}
	
	return 0;
}
