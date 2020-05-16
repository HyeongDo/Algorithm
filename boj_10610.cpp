#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;

string n;
int cnt,k;
long long int sum;

int main(void){
	cin>>n;
	
	for(int i=0;i<n.size();i++){
		if(n[i]=='0') cnt++;
		sum+=n[i]-'0';
		k++;
	}
	
	if(sum%3!=0||cnt==0){
		cout<<"-1";
		return 0;
	}
	
	sort(n.begin(),n.end(),greater<int>());
	
	for(int i=0;i<n.size();i++){
		cout<<n[i];
	}
	
	return 0;
}
