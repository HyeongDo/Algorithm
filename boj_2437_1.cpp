#include<iostream>
#include<algorithm>
using namespace std;

int n,chu[1001],MAX;

int main(void){
	cin>>n;
	for(int i=0;i<n;i++) cin>>chu[i];
	sort(chu,chu+n);
	for(int i=0;i<n;i++){
		if(chu[i]>MAX+1) break;
		MAX+=chu[i];
	}
	cout<<MAX+1;
	return 0;
}
