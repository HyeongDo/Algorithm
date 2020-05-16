#include<iostream>
#include<string.h>
using namespace std;

int n,m,k;
int a[301][301];
long dp[10001];

int main(void){
	cin>>n>>m;
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
		}
	}
	
	cin>>k;
	int i,j,x,y;
	for(int l=0;l<k;l++){
		cin>>i>>j>>x>>y;
		int sum=0;
		for(int q=i;q<=x;q++){
			for(int w=j;w<=y;w++){
				sum+=a[q][w];
			}
		}
		cout<<sum<<endl;
	}
	
	return 0;
}
