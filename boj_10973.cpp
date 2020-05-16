#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int n;
vector<int> v;

int main(void){
	cin>>n;
	int tmp;
	for(int i=0;i<n;i++){
		cin>>tmp;
		v.push_back(tmp);
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
