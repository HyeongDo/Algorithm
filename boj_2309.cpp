#include<iostream>
#include<algorithm>
using namespace std;

int n[10],sum,ck=0;

int main(void){
	for(int i=0;i<9;i++){
		cin>>n[i];
		sum+=n[i];
	}
	for(int i=0;i<8;i++){
		for(int j=i+1;j<9;j++){
			if(n[i]+n[j] == sum-100&&ck==0){
				n[i]+=1000;
				n[j]+=1000;
				ck=1;
				break;
			}
		}
	}
	sort(n,n+9);
	for(int i=0;i<7;i++){
		cout<<n[i]<<endl;
	}
	return 0;
}
