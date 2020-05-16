#include<iostream>
using namespace std;

int n,a[101],p[4];
long long mx=-1e9,mn=1e9;

void dfs(int sum,int a1,int b, int c, int d,int cnt){
	if(cnt==n){
		if(mx<sum) mx=sum;
		if(mn>sum) mn=sum;
		return;
	}
	
	if(a1) dfs(sum+a[cnt],a1-1,b,c,d,cnt+1);
	if(b) dfs(sum-a[cnt],a1,b-1,c,d,cnt+1);
	if(c) dfs(sum*a[cnt],a1,b,c-1,d,cnt+1);
	if(d) dfs(sum/a[cnt],a1,b,c,d-1,cnt+1);
	
}

int main(void){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<4;i++){
		cin>>p[i];
	}
	dfs(a[0],p[0],p[1],p[2],p[3],1);
	
	cout<<mx<<endl;
	cout<<mn;
	
	return 0;
}
