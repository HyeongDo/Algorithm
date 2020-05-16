#include<iostream>
using namespace std;

int n,m,a[10001],cnt,sum;

int main(void){
	cin>>n>>m;
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			sum+=a[j];
			if(sum==m){
				cnt++;
				break;
			}
		}
		sum=0;
	}
	cout<<cnt;
	return 0;
}
