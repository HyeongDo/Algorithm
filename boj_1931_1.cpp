#include<iostream>
#include<utility>
#include<algorithm>
using namespace std;

int n,ans;
pair<int,int> p[100001];

bool sorting(pair<int,int> &a,pair<int,int> &b){
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
	
	sort(p,p+n,sorting);
//	for(int i=0;i<n;i++){
//		cout<<p[i].first<<" "<<p[i].second<<endl;
//	}
	int temp=1e9;
	for(int i=0;i<n;i++){
		if(temp>=p[i].second){
			temp=p[i].first;
			ans+=1;
//			cout<<p[i].second<<" "<<p[i].first<<endl;
		}	
	}
	
	cout<<ans;
	
	return 0;
}
