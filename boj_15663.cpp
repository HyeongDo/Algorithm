#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int n,m;
vector<int> v,t;
bool ck[9];

void sol(){
	if(m==t.size()){
		for(int i=0;i<t.size();i++){
			cout<<t[i]<<" ";
		}
		cout<<'\n';
		return;
	}
	int temp;
	for(int i=0;i<v.size();i++){
		if(ck[i]==true) continue;
		if(temp==v[i]) continue;
		temp=v[i];
		t.push_back(v[i]);
		ck[i]=true;
		sol();
		t.pop_back();
		ck[i]=false;
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
	sol();
	return 0;
}
