#include<iostream>
using namespace std;

int e,s,m,a=0,b=0,c=0,cnt;

int main(void){
	cin>>e>>s>>m;
	while(true){
		
		a++,b++,c++,cnt++;
		if(a>15) a=1;
		if(b>28) b=1;
		if(c>19) c=1;
		
		if(e==a&&s==b&&m==c){
			cout<<cnt;
			break;
		}	
	}
	
	return 0;
}
