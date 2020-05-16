#include<iostream>
using namespace std;

int n,a[100001],s,sum,l,r,len;

void solve(){
	int ans=1e9;
	while(true){
		if(sum>=s){
			if(ans>len) ans=len;
			sum-=a[l];
			l++;
			len--;
		}else{
			if(r==n) break;
			sum+=a[r];
			r++;
			len++;
		}
	}
	if(ans==1e9){
		cout<<0;
	}else{
		cout<<ans;
	}
}


int main(void){
	cin>>n>>s;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	solve();
	return 0;
}
