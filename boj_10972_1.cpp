#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int n,tmp;

int main(void){
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	
	bool ck = prev_permutation(v.begin(),v.end());
	
	if(ck==false){
		cout<<-1;
		return 0;
	}
	
	for(int i=0;i<n;i++){
		cout<<v[i]<<" ";
	}
	
	return 0;
}
