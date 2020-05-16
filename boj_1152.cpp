#include<iostream>
#include<string>
#include<string.h>
using namespace std;

char a[1000001];
int cnt=0;	

int main(void){

	gets(a);
	char *word = strtok(a," ");
	while(word!=NULL){
		cnt++;
		word = strtok(NULL," ");
	}
	
	cout<<cnt;
	
	return 0;
}
