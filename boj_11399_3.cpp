#include<iostream>
#include<algorithm>
using namespace std;

int n;
long long p[1001],sum,ans;

int main(void){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>p[i];
	}
	sort(p,p+n);
	sum=p[0],ans=p[0];
	for(int i=1;i<n;i++){
		sum=sum+p[i];
		ans=ans+sum;
	}
	cout<<ans;
	return 0;
}
