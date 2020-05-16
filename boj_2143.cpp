#include<iostream>
#include<algorithm>
#include<utility>
#include<vector>
using namespace std;

int t,n,m;

int main(void){
	cin>>t;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cin>>m;
	vector<int> b(m);
	for(int i=0;i<m;i++){
		cin>>b[i];
	}
	vector<int> first;
	for(int i=0;i<n;i++){
		int sum=0;
		for(int k=i;k<n;k++){
			sum+=a[k];
			first.push_back(sum);
		}
	}
	vector<int> second;
	for(int i=0;i<m;i++){
		int sum=0;
		for(int k=i;k<m;k++){
			sum+=b[k];
			second.push_back(sum);
		}
	}
	
	sort(first.begin(),first.end());
	sort(second.begin(),second.end());
	
	long long ans=0;
	pair<vector<int>::iterator,vector<int>::iterator> p;
	for(int i=0;i<first.size();i++){
		p = equal_range(second.begin(),second.end(),t-first[i]);
		ans += p.second-p.first;
	}
	cout<<ans;
	return 0;
}
