#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int n,ans;

int main(void){
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	
	sort(v.begin(),v.end());
		
	do{
		int sum=0;
		for(int i=0;i<n-1;i++){
			sum+=abs(v[i]-v[i+1]);
		}
		ans=max(sum,ans);
		
	}while(next_permutation(v.begin(),v.end()));
	
	cout<<ans;
	
	return 0;
}
