#include<iostream>
#include<utility>
#include<algorithm>
using namespace std;

int n,last=1e9,cnt;
pair<int,int> p[100001];

bool compare(pair<int,int>&a,pair<int,int>&b){
	if(a.first==b.first){
		return a.second>b.second;
	}
	return a.first>b.first;
}

int main(void){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>p[i].first>>p[i].second;
	}
	sort(p,p+n,compare);
	for(int i=0;i<n;i++){
//		cout<<p[i].first<<" "<<p[i].second<<endl;
		if(last>=p[i].second){
			last=p[i].first;
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}
