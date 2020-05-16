#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> a(9);
int sum,ai,aj;
bool ck;

int main(void){
	for(int i=0;i<9;i++) {
		cin>>a[i];
		sum+=a[i];	
	}
	
	for(int i=0;i<9;i++){
		for(int j=0;j<9;j++){
			if(i!=j&&(a[i]+a[j])==sum-100&&ck==false){
				a[i]=1000;
				a[j]=1001;
				ck=true;
				break;
			}
		}
	}
	sort(a.begin(),a.end());
	for(int i=0;i<7;i++) cout<<a[i]<<endl;
	return 0;
}
