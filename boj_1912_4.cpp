#include<iostream>
using namespace std;

int n;
long long d[100001],su[100001],MAX=-1001;

int main(void){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>su[i];
	d[1]=su[1],MAX=su[1];
	for(int i=2;i<=n;i++){
		d[i]=max(d[i-1]+su[i],su[i]);
		MAX=max(MAX,d[i]);
	}
	cout<<MAX;
	return 0;
}
