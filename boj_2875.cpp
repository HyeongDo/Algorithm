#include<iostream>
#include<algorithm>
using namespace std;

int n,m,k,nn,mm;
int cnt;

int main(void){
	cin>>n>>m>>k;
	nn=n;
	mm=m;
	
	while(nn>=2&&mm>=1){
		nn-=2;
		mm-=1;
		cnt++;
	}
	
	
	int modSum=nn+mm;
//	cout<<modSum<<endl;
	
	while(cnt){
		if(modSum>=k){
			cout<<cnt;
			return 0;
		}
			modSum+=3;
			cnt--;
	}
	cout<<cnt;
	
	return 0;
}
