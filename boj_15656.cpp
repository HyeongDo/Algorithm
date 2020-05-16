#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int n,m,tmp;
vector<int> v,t;
bool ck[8];
void sol(){
	if(t.size()==m){
		for(int i=0;i<m;i++){
			cout<<t[i]<<" ";
		}
		cout<<'\n';
		return;
	}
	for(int i=0;i<v.size();i++){
		if(ck[i]==true) continue;
//		ck[i]=true;
		t.push_back(v[i]);
		sol();
//		ck[i]=false;
		t.pop_back();
	}
}

int main(void){
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>tmp;
		v.push_back(tmp);
	}
	sort(v.begin(),v.end());
	sol();
	return 0;
}
