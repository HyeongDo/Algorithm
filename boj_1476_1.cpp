#include<iostream>
using namespace std;

int e,s,m,e1=0,s1=0,m1=0,cnt=0;

int main(void){
	cin>>e>>s>>m;
	
	while(true){
		
		e1++,s1++,m1++,cnt++;
		
		if(e1>15) e1=1;
		if(s1>28) s1=1;
		if(m1>19) m1=1;
		
		if(e1==e&&s1==s&&m1==m) break;
	}
	
	cout<<cnt;
	
	return 0;
}
