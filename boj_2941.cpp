#include<iostream>
#include<string>
using namespace std;

string inp;
string a[8] = {"c=","c-","dz=","d-","lj","nj","s=","z="};
int cnt;

int main(void){
	
	cin>>inp;
	int siz = inp.length();
	
	for(int i=0;i<8;i++){
		int pos = 0;
		int temp;
		while((temp=(int)inp.find(a[i],pos))!=-1){
			pos = temp+1;
			cnt++;
		}
	}
	
	printf("%d",siz-cnt);
	
	return 0;
}
