#include<iostream>
using namespace std;

int n,num[15];
long long MAX=-1e9,MIN=1e9;
int y[4];

void solve(int i,int ans,int add,int sub,int mul,int div){
	if(i==n){
		if(ans>MAX) MAX=ans;
		if(ans<MIN) MIN=ans;
		return;
	}
	if(add) solve(i+1,ans+num[i],add-1,sub,mul,div);
	if(sub) solve(i+1,ans-num[i],add,sub-1,mul,div);
	if(mul) solve(i+1,ans*num[i],add,sub,mul-1,div);
	if(div) solve(i+1,ans/num[i],add,sub,mul,div-1);
}

int main(void){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>num[i];
	}
	for(int i=0;i<4;i++){
		cin>>y[i];
	}
	solve(1,num[0],y[0],y[1],y[2],y[3]);
	cout<<MAX<<endl;
	cout<<MIN<<endl;
	return 0;
}
