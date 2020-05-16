#include<iostream>
#include<algorithm>
using namespace std;

int n,a[1001],sum,ans[1001];

int main(void){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	sum=a[0];
	ans[0]=a[0];
	for(int i=1;i<n;i++){
		sum+=a[i];
		ans[i]=ans[i-1]+sum;
	}
	cout<<ans[n-1];
	
	return 0;
}
