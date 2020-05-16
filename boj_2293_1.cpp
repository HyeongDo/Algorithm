#include<iostream>
using namespace std;

int n,k,d[10001],m[10001];

int main(void){
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>m[i];
	}
	d[0]=1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=k;j++){
			if(j>=m[i]){
				d[j]+=d[j-m[i]];
			}
		}
	}
	cout<<d[k];
	return 0;
}
