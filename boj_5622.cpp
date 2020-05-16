#include<iostream>
#include<string>
using namespace std;

string a;
int arr[16];
int sav[16];
int chk;

int main (void){
	
	cin>>a;
	
	for(int i=0;i<a.length();i++){
		if(a[i]-65<=2){
			sav[i]=2;
		}else if(a[i]-65<=5){
			sav[i]=3;
		}else if(a[i]-65<=8){
			sav[i]=4;
		}else if(a[i]-65<=11){
			sav[i]=5;
		}else if(a[i]-65<=14){
			sav[i]=6;
		}else if(a[i]-65<=18){
			sav[i]=7;
		}else if(a[i]-65<=21){
			sav[i]=8;
		}else if(a[i]-65<=25){
			sav[i]=9;
		}
		chk+=sav[i]+1;
	}
	
	printf("%d",chk);
	
	return 0;
}
