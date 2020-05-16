#include<iostream>
using namespace std;

int n,m,six=1001,one=1001,temp1,temp2,ans;

int main(void){
	cin>>n>>m;
	for(int i=0;i<m;i++){
		cin>>temp1>>temp2;
		if(temp1<six) six=temp1;
		if(temp2<one) one=temp2;
	}
	int num=n;
	while(n){
		if(n>6){
			if(one*num>=six){
				n-=6;
				ans+=six;
			}else{
				n-=n;
				ans+=n;
			}
		}else{
			if(one*num>=six){
				n-=n;
				ans+=six;
			}else{
				n-=n;
				ans+=one;
			}
		}
		cout<<n<<endl; 
	}
	cout<<ans;
	
	return 0;
}
