#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string>
using namespace std;


pair<int,int> p[100001];
string name[100001];
int main (void){
	
	int n;
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>p[i].first>>name[i];
		p[i].second=i;
	}
	
	sort(p,p+n);
	
	for(int i=0;i<n;i++){
		cout<<p[i].first<<" "<<name[p[i].second]<<"\n";
	}
	
	return 0;
}
