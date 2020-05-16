#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;

string inp;
int ans,num;
int chk=1;

int main(void){
	cin>>inp;
	for(int i=0;i<inp.size();i++){
		if(inp[i]=='-'){
			chk=-1;
			ans+=num;
			num=0;
		}else if(inp[i]=='+'){
			ans+=num;
			num=0;
		}else{
			num=num*10+(inp[i]-'0')*chk;
		}
	}
	ans+=num;
	cout<<ans;
	return 0;
}
