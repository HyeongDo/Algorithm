#include<iostream>
#include<string>
#include<string.h>
#include<vector>
using namespace std;

string c;
int chk[1000001];
int maxx = -1;
bool dup = false;
char out;

int main(void){
	
	cin>>c;
	
	for(int i=0;i<c.length();i++){
		//�ҹ��ڸ� �빮�ڷ� ���� 
		if(c[i]>='a'){
			c[i]=c[i]-32;
		}
		
		//�빮�� ���� ���ϱ�
		chk[c[i]]++; 
		
		if(maxx < chk[c[i]]){
			maxx = chk[c[i]];
			dup = false;
			out = c[i];
		}else if(maxx == chk[c[i]]){
			dup = true;
		}
	}
	
	if(dup == false){
		printf("%c",out);
	}else{
		printf("?");
	}
	
	return 0;
}
