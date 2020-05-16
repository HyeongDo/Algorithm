#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int n,p[40001],cnt;
vector<int> g;
vector<int>::iterator ans;

int main(void){
	cin>>n;
	for(int i=0;i<n;i++) cin>>p[i];
	g.push_back(p[0]);
	for(int i=1;i<n;i++){
		if(p[i]>g[cnt]){
			g.push_back(p[i]);
			cnt++;
		}else{
			ans=lower_bound(g.begin(),g.end(),p[i]);
			*ans=p[i];
		}
	}
	cout<<g.size();
	return 0;
}
