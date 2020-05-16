#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int n,m;
vector<int> v,t;
bool ck[9];
void sol(int node){
	if(m==t.size()){
		for(int i=0;i<m;i++){
			cout<<t[i]<<" ";
		}
		cout<<'\n';
		return;
	}
	int temp=0;
	for(int i=node;i<n;i++){
		if(ck[i]==true) continue;
		if(temp==v[i]) continue;
		ck[i]=true;
		temp=v[i];
		t.push_back(v[i]);
		sol(i+1);
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
