#include<iostream>
using namespace std;

string inp;
char num[51];
int n,temp,chk=1,ans;

int main(void){
	cin>>inp;
	for(int i=0;i<inp.size();i++){
		if(inp[i]=='-'){
			ans+=n*chk;
			chk=-1;
			n=0;
		}
		else if(inp[i]=='+'){
			ans+=n*chk;
			n=0;
		}
		else{
			temp=inp[i]-'0';
			n=(n*10+temp);
		}
	}
	ans+=n*chk;
	cout<<ans;
	return 0;
}
