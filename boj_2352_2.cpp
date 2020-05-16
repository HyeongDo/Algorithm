#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int n,s[40001],cnt;
vector<int>g;
vector<int>::iterator ans;

int main(void){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s[i];
	}
	g.push_back(s[0]);
	for(int i=1;i<n;i++){
		if(s[i]>g[cnt]){
			g.push_back(s[i]);
			cnt++;
		}else{
			ans=lower_bound(g.begin(),g.end(),s[i]);
			*ans=s[i];
		}
	}
	cout<<g.size();
	return 0;
}
