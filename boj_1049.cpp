#include<iostream>
#include<algorithm>
using namespace std;

int n,m,num,sum;
int p6[51], p1[51];

int main(void){
	cin>>n>>m;
	
	for(int i=0;i<m;i++){
		cin>>p6[i]>>p1[i];
	}
	
	sort(p6,p6+m);
	sort(p1,p1+m);
	
	while(n>0){
		if(n>=6){
			if(p6[0]>p1[0]*6){
				sum+=p1[0]*n;
				n-=n;
			}else{
				sum+=p6[0];
				n-=6;
			}
		}else{
			if(p6[0]<p1[0]*n){
				sum+=p6[0];
				n-=6;
			}else{
				sum+=p1[0]*n;
				n-=n;
			}
		}
	}
	
	cout<<sum;
	
	return 0;
}
