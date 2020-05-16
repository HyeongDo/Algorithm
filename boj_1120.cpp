#include<iostream>
using namespace std;

string a,b;
int cnt,MIN=51;

int main(void){
	cin>>a>>b;
	
	for(int i=0;i<b.size()-a.size()+1;i++){
		for(int j=i;j<i+a.size();j++){
			if(b[j]!=a[j-i]) cnt++;
		}
		MIN = min(MIN,cnt);
		cnt=0;
	}
	
	cout<<MIN;
	
	return 0;
}
