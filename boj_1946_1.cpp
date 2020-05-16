#include<iostream>
#include<utility>
#include<algorithm>
using namespace std;

int t,n,a,b,cnt=1;
pair<int,int> p[100001];

int main(void){
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>p[i].first>>p[i].second;
		}
		sort(p,p+n);
//		cout<<"-"<<endl;
//		for(int i=0;i<n;i++){
//			cout<<p[i].first<<" "<<p[i].second<<endl;
//		}
//		cout<<"-"<<endl;
		a=p[0].first,b=p[0].second;
		for(int i=1;i<n;i++){
			if(p[i].first<a||p[i].second<b){
				cnt++;
				if(p[i].first<a){
					a=p[i].first;
				}
				if(p[i].second<b){
					b=p[i].second;
				}
			}
		}
		cout<<cnt<<endl;
		cnt=1;
	}
	return 0;
}
