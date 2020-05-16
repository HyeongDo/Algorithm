#include<iostream>
#include<algorithm>
using namespace std;

string n;
int zero;
long long int chk;

int main(void){
	cin>>n;
	for(int i=0;i<n.size();i++){
		chk+=n[i]-'0';
		if(n[i]=='0') zero++;
	}
	if(chk%3!=0||zero==0){
		cout<<"-1";
		return 0;
	}
	sort(n.begin(),n.end(),greater<int>());
	for(int i=0;i<n.size();i++){
		cout<<n[i];
	}
	return 0;	
}
