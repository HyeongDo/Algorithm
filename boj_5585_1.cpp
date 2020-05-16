#include<iostream>
#include<algorithm>
using namespace std;

int n,ans,joi[6]={500,100,50,10,5,1};

int main(void){
	cin>>n;
	int num=1000-n;
	for(int i=0;i<6;i++){
		while(num>=joi[i]){
			ans+=num/joi[i];
			num%=joi[i];
		}
	}
	cout<<ans;
	return 0;
}
