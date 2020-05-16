#include<iostream>
#include<algorithm>
using namespace std;

int n,c[1001],MAX;

int main(void){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>c[i];
	}
	sort(c,c+n);
	for(int i=0;i<n;i++){
		if(c[i]>MAX+1) break;
		MAX+=c[i];
	}
	cout<<MAX+1;
	return 0;
}
