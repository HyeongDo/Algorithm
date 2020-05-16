#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int n,m;
bool ck[9];
vector<int> v,t;

void sol(int node){
	if(m==t.size()){
		for(int i=0;i<m;i++){
			cout<<t[i]<<" ";
		}
		cout<<'\n';
		return;
	}
	int tmp=0;
	for(int i=node;i<n;i++){
		if(tmp==v[i]) continue;
//		if(ck[i]==true) continue;
		ck[i]=true;
		tmp=v[i];
		t.push_back(v[i]);
		sol(i);
		ck[i]=false;
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
