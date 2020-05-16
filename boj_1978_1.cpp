#include<iostream>
#include<math.h>
using namespace std;

int n,ans,inp;
bool chk;

int main(void){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>inp;
		for(int i=2;i<=sqrt(inp);i++){
			if(inp%i==0){
				chk=true;
				break;
			}
		}
		if(inp==1){
			chk=true;
		}
		if(chk==false){
			ans++;
		}
		chk=false;
	}
	cout<<ans;
	return 0;
}
