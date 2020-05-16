#include<iostream>
#include<algorithm>
#include<utility>
using namespace std;

int n,chk,MAX;
pair<int,int> p[100001];

bool compare(pair<int,int> &a,pair<int,int> &b){
	if(a.first==b.first){
		return a.second>b.second;
	}
	return a.first>b.first;
}

int main(void){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>p[i].first>>p[i].second;
		MAX = max(MAX,p[i].first);
		MAX = max(MAX,p[i].second);
	}
	
	sort(p,p+n,compare);
	
//	for(int i=0;i<n;i++){
//		cout<<p[i].first<<" "<<p[i].second<<endl;
//	}
	
	for(int i=0;i<n;i++){
		if(p[i].second<=MAX){
			MAX=p[i].first;
			chk++;
//			cout<<MAX<<endl;
		}
	}
	
	cout<<chk;
	
	return 0;
}
