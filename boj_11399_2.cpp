#include<iostream>
#include<algorithm>
using namespace std;

int n,at[1001];
long long int ans,sum;

int main(void){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>at[i];
	}
	sort(at,at+n);
	for(int i=0;i<n;i++){
		sum=sum+at[i];
		ans=ans+sum;
	}
	cout<<ans;
	return 0;
}
