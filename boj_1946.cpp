#include<iostream>
#include<utility>
#include<algorithm>
#include<vector>
using namespace std;

int t,n,c,m,cnt;
pair<int,int>p[100001];

int main(void){
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>p[i].first>>p[i].second;
		}
		sort(p,p+n);
		c=p[0].first,m=p[0].second;
		cnt++;
		for(int i=1;i<n;i++){
			if(c>p[i].first||m>p[i].second){
				cnt++;
				if(c>p[i].first) c=p[i].first;
				if(m>p[i].second) m=p[i].second;
			}
		}
		cout<<cnt<<endl;
		c=0,m=0,cnt=0;
	}
	
	return 0;
}
