#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int n;
vector<int> a,b,c,d,v1,v2;

int main(void){
	cin>>n;
	
	a=b=c=d=vector<int> (n);
	
	for(int i=0;i<n;i++){
		cin>>a[i]>>b[i]>>c[i]>>d[i];
	}
	
	v1=v2=vector<int> (n*n);
	
	int cnt=0;
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			v1[cnt]=a[i]+b[j];
			v2[cnt++]=c[i]+d[j];
		}
	}
	
	sort(v2.begin(),v2.end());
	
	long long res=0;
	vector<int>::iterator it,it2;
	
	for(int i=0;i<cnt;i++){
		it=lower_bound(v2.begin(),v2.end(),-v1[i]);
		it2=upper_bound(v2.begin(),v2.end(),-v1[i]);
		while(it!=it2){
			res++;
			it++;
		}
	}
	cout<<res;
	return 0;
}
