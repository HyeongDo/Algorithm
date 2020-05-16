#include<iostream>
#include<string>
using namespace std;

string a;
int inp;
int num;
int k;

int main(void){
	
	cin>>inp;
	
	for(int i=0;i<inp;i++){
		cin>>num>>a;
		for(int j=0;j<a.size();j++){
			for(int k=0;k<num;k++){
				printf("%c",a[j]);
			}
		}
		printf("\n");
	}
		
	return 0;
}
