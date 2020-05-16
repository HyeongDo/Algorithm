#include<iostream>
using namespace std;

int n,a[11][11],mn=1e9;
bool ck[11];

void sol(int s,int e,int cnt,int sum){
	
	if(s==e&&cnt==n){
		mn=min(sum,mn);
		return;
	}
	
	for(int i=0;i<n;i++){
		if(a[e][i]==0) continue;
		if(ck[e]==false&&a[e][i]>0){
			ck[e]=true;
			sum+=a[e][i];
			
			if(sum<=mn) sol(s,i,cnt+1,sum);
			
			ck[e]=false;
			sum-=a[e][i];
		}
	}
}

int main(void){
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	
	for(int i=0;i<n;i++){
		sol(i,i,0,0);
	}
	
	cout<<mn;
	
	return 0;
}
