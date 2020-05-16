#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>
using namespace std;

int n,x,y,last=1e9,cnt;
vector<pair<int,int> > vec;

bool compare(pair<int,int>&a,pair<int,int>&b){
	if(a.first==b.first){
		return b.second<a.second;
	}
	return a.first>b.first;
}

int main(void){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x>>y;
		vec.push_back(make_pair(x,y));
	}
	sort(vec.begin(),vec.end(),compare);
	for(int i=0;i<n;i++){
		if(last>=vec[i].second){
			last=vec[i].first;
			cnt++;
		}
//		cout<<vec[i].first<<" "<<vec[i].second<<endl;
	}
	cout<<cnt;
	return 0;
}
