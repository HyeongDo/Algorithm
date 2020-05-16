#include<iostream>
using namespace std;

string inp;
int chk=1,ans,n;

int main(void){
	cin>>inp;
	for(int i=0;i<inp.size();i++){
		if(inp[i]=='-'){
			ans+=n*chk;
			chk=-1;
			n=0;
		}else if(inp[i]=='+'){
			ans+=n*chk;
			n=0;
		}else{
			if(n==0){
				n+=(inp[i]-'0');	
			}else{
				n*=10;
				n+=inp[i]-'0';
			}
		}
	}
	ans+=n*chk;
	cout<<ans;
	return 0;
}
