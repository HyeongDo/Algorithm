#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int n,tmp,MIN=10001;
vector<int> v;

int main(void){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>tmp;
		v.push_back(tmp);
		MIN=tmp<MIN ? tmp : MIN;
	}
	
	bool ck = next_permutation(v.begin(),v.end());
	if(ck==false){
		cout<<-1;
		return 0;
	}
	
	for(int i=0;i<n;i++){
		cout<<v[i]<<" ";
	}
	
	return 0;
}
