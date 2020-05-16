#include<iostream>
using namespace std;

int m,bit;
string cmd;

int main(void){
	scanf("%d",&m);
	
	while(m--){
		char str[51];
		scanf("%s",&str);
		cmd=str;
		
		int n=0,tmp=0;
		if(cmd=="all") bit= (1<<21)-1;
		else scanf("%d",&n);
		
		if(cmd=="add") bit |= (1<<(n-1));
		else if(cmd=="remove") bit &= ~(tmp|1<<(n-1));
		else if(cmd=="check") (bit & 1<<(n-1)) ? puts("1") : puts("0");
		else if(cmd=="toggle") bit = bit ^ (1<<(n-1));
		else if(cmd=="empty") bit = 1>>21;
	}
	
	return 0;
}
