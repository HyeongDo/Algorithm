#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int n,m;
vector<int> v,t;
bool ck[9];
void sol(){
	if(m==t.size()){
		for(int i=0;i<m;i++){
			cout<<t[i]<<" ";
		}
		cout<<'\n';
		return;
	}
	int tmp=0;
	for(int i=0;i<n;i++){
//		if(ck[i]==true) continue;
		if(tmp==v[i]) continue;
		tmp=v[i];
//		ck[i]=true;
		t.push_back(v[i]);
		sol();
//		ck[i]=false;
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
	sol();
	return 0;
}
