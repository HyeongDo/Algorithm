#include<iostream>
#include<utility>
#include<algorithm>
#include<vector>
using namespace std;

int t,n,f,s,cnt;

int main(void){
	cin>>t;
	while(t--){
		cin>>n;
		vector<pair<int,int> > p;
		p.resize(n);
		cnt=0;
		for(int i=0;i<n;i++){
			cin>>p[i].first>>p[i].second;
		}
		sort(p.begin(),p.end(),less<pair<int,int> >());
		f=p[0].first, s=p[0].second;
		cnt=1;
		for(int i=1;i<n;i++){
			if(p[i].first<f||p[i].second<s){
				cnt++;
				if(p[i].first<f){
					f=p[i].first;
				}
				if(p[i].second<s){
					s=p[i].second;
				}
			}
		}
		cout<<cnt<<endl;
	}
	
	return 0;
}
