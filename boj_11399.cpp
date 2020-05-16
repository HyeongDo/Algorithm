#include<iostream>
#include<algorithm>
using namespace std;

int n,p[1001],sum;

int main(void){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>p[i];
	}
	sort(p,p+n);
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			sum+=p[j];
		}
	}
	cout<<sum;
	
	return 0;
}
