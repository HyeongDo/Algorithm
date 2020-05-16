#include<iostream>
#include<string.h>
#include<vector>
using namespace std;

int n,cnt,sum,l,r;
vector<int> a;

void solve(){
	
	vector<bool> c(n+1);
	for(int i=2;i*i<=n;i++){
		if(!c[i]){
			for(int j=i*i;j<=n;j+=i){
				c[j]=true;
			}
		}
	}
	
	for(int i=2;i<=n;i++){
		if(!c[i]) a.push_back(i);
	}
	
	int m=a.size();
	
	while(true){
		if(sum>=n){
			sum-=a[l];
			l++;
		}else{
			if(r==m) break;
			sum+=a[r];
			r++;
		}
		if(sum==n) cnt++;
	}
	cout<<cnt;
}

int main(void){
	cin>>n;
	solve();	
	return 0;
}
