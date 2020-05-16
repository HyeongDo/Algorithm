#include<iostream>
using namespace std;

int n,m,six=1001,one=1001,x,y,money;

int main(void){
	cin>>n>>m;
	for(int i=0;i<m;i++){
		cin>>x>>y;
		six=min(x,six);
		one=min(y,one);
	}
	while(n>0){
		if(n>=6){
			if(six>one*6){
				money+=one*n;
				n-=n;
			}else{
				money+=six;
				n-=6;
			}
		}else{
			if(six<one*n){
				money+=six;
				n-=6;
			}else{
				money+=one*n;
				n-=n;
			}
		}
//		cout<<money<<endl;
	}
	cout<<money;
	return 0;
}
