#include<iostream>
#include<vector>
using namespace std;

int n;
char a[21][21];
vector<int> v;

bool possible(int idx){
	int sum=0;
	for(int i=idx;i>=0;i--){
		sum+=v[i];
		if(a[i][idx]=='+'&&sum<=0) return false;
		if(a[i][idx]=='0'&&sum!=0) return false;
		if(a[i][idx]=='-'&&sum>=0) return false;
	}
	return true;
}

void solve(int idx){
	if(idx==n){
		for(int i=0;i<v.size();i++){
			cout<<v[i]<<" ";
		}
		cout<<"\n";
		exit(0);
	}
	
	for(int i=-10;i<11;i++){
		v.push_back(i);
		if(possible(idx)) solve(idx+1);
		v.pop_back();
	}
}

int main(void){
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			cin>>a[i][j];
		}
	}
	solve(0);
	return 0;
}
