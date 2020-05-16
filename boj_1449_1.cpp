#include<iostream>
#include<algorithm>
using namespace std;

int n,l,p[1001],ans;
bool chk[1001];

int main(void){
	cin>>n>>l;
	for(int i=0;i<n;i++){
		cin>>p[i];
	}
	sort(p,p+n);
	for(int i=0;i<n;i++){
		if(chk[p[i]]==false){
			for(int j=p[i];j<=p[i]+l-1;j++){
				chk[j]=true;
			}
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
