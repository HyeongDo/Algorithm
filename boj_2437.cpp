#include<iostream>
#include<algorithm>
using namespace std;

int n,c[1001],mx;

int main(void){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>c[i];
	}
	sort(c,c+n);
	for(int i=0;i<n;i++){
		if(c[i]>mx+1) break;
		mx+=c[i];
	}
	cout<<mx+1;
	return 0;
}
