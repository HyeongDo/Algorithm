#include<iostream>
#include<string>
using namespace std;

int num;
string inp;
bool chk[30];
bool chkFal;
int cnt;

int main(void){
	
	cin>>num;
	for(int i=0;i<num;i++){
		cin>>inp;
		for(int j=0;j<inp.length();j++){
			inp[j]=inp[j]-97;
			if(j>0 && inp[j]!=inp[j-1]){
				if(chk[inp[j]]==true){
					chkFal=true;
					break;
				}
			}
			chk[inp[j]] = true;
		}
		if(chkFal==false){
			cnt++;
		}
		chkFal = false;
		for(int k=0;k<30;k++){
			chk[k]=false;
		}
	}
	
	printf("%d",cnt);
	
	return 0;
}
