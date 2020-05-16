#include<iostream>
using namespace std;

int n,joi[]={500,100,50,10,5,1},ans;

int main(void){
	cin>>n;
	n=1000-n;
	for(int i=0;i<6;i++){
		while(n>=joi[i]){
			ans+=n/joi[i];
			n=n%joi[i];
//			cout<<n<<endl;
		}
	}
	cout<<ans;
	return 0;
}
