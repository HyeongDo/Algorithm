#include<iostream>
#include<algorithm>
using namespace std;

int n,k,inp[11],ans;

int main(void){
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>inp[i];
	}
	sort(inp,inp+n,greater<int>());
		for(int i=0;i<n;i++){
			if(k<inp[i]) continue;
			ans+=k/inp[i];
			k%=inp[i];
		}
	cout<<ans;
	
	return 0;
}
