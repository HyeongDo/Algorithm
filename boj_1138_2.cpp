#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int n,t[11];
vector<int> v;

int main(void){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>t[i];
	}
	v.push_back(n);
	for(int i=n-1;i>=1;i--){
		v.insert(v.begin()+t[i],i);
	}
	for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
	
	return 0;
}
