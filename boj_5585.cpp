#include<iostream>
using namespace std;

int n,ans,d[6]={500,100,50,10,5,1};

int main(void){
	cin>>n;
	n=1000-n;
	for(int i=0;i<6;i++){
		while(n>=d[i]){
			n=(n-d[i]);
			ans++;
		}
	}
	cout<<ans;
	
	return 0;
}
