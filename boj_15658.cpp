#include<iostream>
using namespace std;

long long MAX=-1e9,MIN=1e9;
int n,a[12],y[4];

void dfs(int i,int sum,int add,int sub,int mul,int div){
	if(i==n){
		if(MAX<sum) MAX=sum;
		if(MIN>sum) MIN=sum;
		return;
	}
	if(add) dfs(i+1,sum+a[i],add-1,sub,mul,div);
	if(sub) dfs(i+1,sum-a[i],add,sub-1,mul,div);
	if(mul) dfs(i+1,sum*a[i],add,sub,mul-1,div);
	if(div) dfs(i+1,sum/a[i],add,sub,mul,div-1);
}

int main(void){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<4;i++){
		cin>>y[i];
	}
	dfs(1,a[0],y[0],y[1],y[2],y[3]);
	cout<<MAX<<endl;
	cout<<MIN;
	return 0;
}
