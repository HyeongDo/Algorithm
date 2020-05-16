#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int n,m;
vector<int> v,t;

void sol(int node){
	if(t.size()==m){
		for(int i=0;i<t.size();i++){
			cout<<t[i]<<" ";
		}
		cout<<'\n';
		return;
	}
	for(int i=node;i<v.size();i++){
		t.push_back(v[i]);
		sol(i);
		t.pop_back();
	}
}

int main(void){
	cin>>n>>m;
	int tmp;
	for(int i=0;i<n;i++){
		cin>>tmp;
		v.push_back(tmp);
	}
	sort(v.begin(),v.end());
	sol(0);
	return 0;
}
