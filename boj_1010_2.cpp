#include<iostream>
using namespace std;

int t,n,m,d[31][31];

int main(void){
	cin>>t;
	d[1][1]=1;
	for(int i=2;i<=30;i++){
		d[i][1]=i;
		for(int j=2;j<=i;j++){
			d[i][j]=d[i-1][j]+d[i-1][j-1];
		}
	}
	while(t--){
		cin>>n>>m;
		cout<<d[m][n]<<endl;
	}
	
	return 0;
}
