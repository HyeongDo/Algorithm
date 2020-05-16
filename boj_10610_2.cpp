#include<iostream>
#include<algorithm>
using namespace std;

string n;
char inp[100000];
int z,sum;

int main(void){
	cin>>n;
	for(int i=0;i<n.size();i++){
		if(n[i]=='0') z++;
		sum+=n[i]-'0';
	}
	if(z==0||sum%3!=0){
		cout<<"-1";
		return 0;
	}
	sort(n.begin(),n.end(),greater<char>());
	for(int i=0;i<n.size();i++){
		cout<<n[i];
	}
	
	return 0;
}
