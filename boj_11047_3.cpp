#include<iostream>
using namespace std;

int n,k,ans;
long long d[11];

int main(void){
	cin>>n>>k;
	for(int i=n-1;i>=0;i--){
		cin>>d[i];
	}
	for(int i=0;i<n;i++){
		while(k>=d[i]){
			ans+=k/d[i];
			k%=d[i];
		}
	}
	cout<<ans;
	return 0;
}
