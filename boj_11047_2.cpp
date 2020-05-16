#include<iostream>
using namespace std;

int n,money[11],ans;
long long int k;

int main(void){
	cin>>n>>k;
	for(int i=n-1;i>=0;i--){
		cin>>money[i];
	}
	for(int i=0;i<n;i++){
		if(k>=money[i]){
			ans+=k/money[i];
			k%=money[i];
		}
	}
	cout<<ans;
	return 0;
}
