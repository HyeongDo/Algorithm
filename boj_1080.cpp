#include<iostream>
using namespace std;

int n,m,ck;
char a[51][51],b[51][51];

int main(void){
	cin>>n>>m;

	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		cin>>b[i];
	}
	
	for(int i=0;i<n-2;i++){
		for(int j=0;j<m-2;j++){
			if(a[i][j]==b[i][j]) continue;
			ck++;
			for(int x=i;x<i+3;x++){
				for(int y=j;y<j+3;y++){
					if(a[x][y]=='1') a[x][y]='0';
					else a[x][y]='1';
				}
			}	
		}
	}
	
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
		if(a[i][j]!=b[i][j]) {
			cout<<"-1";
			return 0;
		}
	
	cout<<ck;
	
	return 0;
}
