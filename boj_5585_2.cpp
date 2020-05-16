#include<iostream>
using namespace std;

int inp,joi[]={500,100,50,10,5,1},ans;

int main(void){
	cin>>inp;
	inp=1000-inp;
	for(int i=0;i<6;i++){
		if(inp>=joi[i]){
			ans+=inp/joi[i];
			inp%=joi[i];
		}
	}
	cout<<ans;
	return 0;
}
