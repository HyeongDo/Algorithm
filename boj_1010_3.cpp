#include<iostream>
using namespace std;

int t,n,m;
long long d[31][31];

void solve(){
	for(int i=1;i<=30;i++){
		for(int j=1;j<=i;j++){
			if(j==1){
				d[i][j]=i;
			}else if(j==i){
				d[i][j]=1;
			}else{
				d[i][j]=d[i-1][j]+d[i-1][j-1];
			}
		}
	}
}

int main(void){
	cin>>t;
	solve();
	while(t--){
		cin>>n>>m;
		cout<<d[m][n]<<endl;
	}
	return 0;
}
